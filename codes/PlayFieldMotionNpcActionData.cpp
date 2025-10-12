// local variable allocation has failed, the output may be wrong!
void PlayFieldMotionNpcActionData___ctor(
        PlayFieldMotionNpcActionData_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  if ( (byte_4C39F85 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    byte_4C39F85 = 1;
  }
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)this, *(const MethodInfo **)&targetId);
  this->fields.targetId = targetId;
}


void PlayFieldMotionNpcActionData__PreActionProcess(
        PlayFieldMotionNpcActionData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetObject; // x22
  BattlePerformance_o *perf; // x0
  struct UnityEngine_GameObject_o *ServantGameObject; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C39F86 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39F86 = 1;
  }
  BattleActionData__PreActionProcess((BattleActionData_o *)this, data, method);
  targetObject = (UnityEngine_Object_o *)this->fields.targetObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  perf = (BattlePerformance_o *)UnityEngine_Object__op_Equality(targetObject, 0, 0);
  if ( ((unsigned __int8)perf & 1) != 0 )
  {
    if ( !data || (perf = data->fields.perf) == 0 )
      sub_1C32E7C(perf);
    ServantGameObject = BattlePerformance__getServantGameObject(perf, this->fields.targetId, 0);
    this->fields.targetObject = ServantGameObject;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.targetObject, (int32_t)ServantGameObject, v8, v9);
  }
}