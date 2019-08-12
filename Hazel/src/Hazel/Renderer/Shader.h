#pragma once

#include <string>
#include <glm/glm.hpp>

namespace Hazel {

	class HAZEL_API Shader 
	{
	public:
		Shader(const std::string& vertexSrc, const std::string& fragmentSrc);
		~Shader();

		void Bind() const;
		void Unbind() const;

		void UploadUniformFloat4(const std::string& name, const glm::vec4& value) const;

		void UploadUniformMat4(const std::string& name, const glm::mat4& matrix) const;

	private:
		uint32_t m_RendererId;
	};

}