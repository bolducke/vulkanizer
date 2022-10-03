#pragma once

std::vector<uint8_t> readFile(
	const char* _pFilePath);

glm::mat4 getInfinitePerspectiveMatrix(
	float _fov,
	float _aspect,
	float _near);

uint32_t divideRoundingUp(
	uint32_t _dividend,
	uint32_t _divisor);
