// local variable allocation has failed, the output may be wrong!
void __fastcall PlayFieldMotionNpcActionData___ctor(
        PlayFieldMotionNpcActionData_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  if ( (byte_4B184AE & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, *(_QWORD *)&targetId, method);
    byte_4B184AE = 1;
  }
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, *(_QWORD *)&targetId);
  BattleActionData___ctor((BattleActionData_o *)this, *(const MethodInfo **)&targetId);
  this->fields.targetId = targetId;
}


void __fastcall PlayFieldMotionNpcActionData__PreActionProcess(
        PlayFieldMotionNpcActionData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *targetObject; // x22
  BattlePerformance_o *perf; // x0
  __int64 v8; // x1
  struct UnityEngine_GameObject_o *ServantGameObject; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B184AF & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, data, method);
    byte_4B184AF = 1;
  }
  BattleActionData__PreActionProcess((BattleActionData_o *)this, data, method);
  targetObject = (UnityEngine_Object_o *)this->fields.targetObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  perf = (BattlePerformance_o *)UnityEngine_Object__op_Equality(targetObject, 0LL, 0LL);
  if ( ((unsigned __int8)perf & 1) != 0 )
  {
    if ( !data || (perf = data->fields.perf) == 0LL )
      sub_1BCAA3C(perf, v8);
    ServantGameObject = BattlePerformance__getServantGameObject(perf, this->fields.targetId, 0LL);
    this->fields.targetObject = ServantGameObject;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.targetObject,
      (int64_t)ServantGameObject,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
}