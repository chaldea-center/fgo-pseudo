// local variable allocation has failed, the output may be wrong!
void __fastcall PlayFieldMotionNpcActionData___ctor(
        PlayFieldMotionNpcActionData_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  if ( (byte_4B46F72 & 1) == 0 )
  {
    sub_1BDB878(&BattleActionData_TypeInfo, *(_QWORD *)&targetId);
    byte_4B46F72 = 1;
  }
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)this, 0LL);
  this->fields.targetId = targetId;
}


void __fastcall PlayFieldMotionNpcActionData__PreActionProcess(
        PlayFieldMotionNpcActionData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetObject; // x22
  BattlePerformance_o *perf; // x0
  __int64 v7; // x1
  struct UnityEngine_GameObject_o *ServantGameObject; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B46F73 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, data);
    byte_4B46F73 = 1;
  }
  BattleActionData__PreActionProcess((BattleActionData_o *)this, data, 0LL);
  targetObject = (UnityEngine_Object_o *)this->fields.targetObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  perf = (BattlePerformance_o *)UnityEngine_Object__op_Equality(targetObject, 0LL, 0LL);
  if ( ((unsigned __int8)perf & 1) != 0 )
  {
    if ( !data || (perf = data->fields.perf) == 0LL )
      sub_1BDBAD4(perf, v7);
    ServantGameObject = BattlePerformance__getServantGameObject(perf, this->fields.targetId, 0LL);
    this->fields.targetObject = ServantGameObject;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.targetObject, (int32_t)ServantGameObject, v9, v10);
  }
}