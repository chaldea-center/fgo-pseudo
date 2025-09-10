void NpcAiState___ctor(NpcAiState_o *this, int32_t groupId, const MethodInfo *method)
{
  this->fields.beforeActId = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.firstAiGroupId = groupId;
  this->fields.aiGroupId = groupId;
  *(_QWORD *)&this->fields.baseTurn = 0;
  *(_QWORD *)&this->fields.fieldTurn = 0;
}