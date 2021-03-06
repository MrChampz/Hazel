#pragma once

#include <glm/glm.hpp>

namespace Hazel {

	class HAZEL_API OrthographicCamera
	{
	public:
		OrthographicCamera(
			float left = -1.0f,
			float right = 1.0f,
			float bottom = -1.0f,
			float top = 1.0f
		);

		const glm::vec3& GetPosition() const { return m_Position; }
		void SetPosition(const glm::vec3& position)
		{
			m_Position = position;
			RecalculateViewMatrix();
		}

		float GetRotation() const { return m_Rotation; }
		void SetRotation(float rotation)
		{
			m_Rotation = rotation;
			RecalculateViewMatrix();
		}

		const glm::mat4& GetProjectionMatrix() const { return m_ProjectionMatrix; }
		const glm::mat4& GetViewMatrix() const { return m_ViewMatrix; }
		const glm::mat4& GetViewProjectionMatrix() const { return m_ViewProjectionMatrix; }

	private:
		void RecalculateViewMatrix();

	private:
		glm::mat4 m_ProjectionMatrix;
		glm::mat4 m_ViewMatrix;
		glm::mat4 m_ViewProjectionMatrix;

		glm::vec3 m_Position;
		float m_Rotation;
	};

}