void __fastcall StoneCountRefreshComponent___ctor(StoneCountRefreshComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StoneCountRefreshComponent__AttachToGameObject(
        UnityEngine_GameObject_o *targetGameObject,
        System_Action_int__o *refreshAction,
        bool checkDeferredPurchaseExists,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  PurchaseBehaviour_c *v11; // x0
  Il2CppObject *HasComponent_object; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B15BB6 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_GameObjectExtensions_HasComponent_StoneCountRefreshComponent___,
      refreshAction,
      checkDeferredPurchaseExists);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_StoneCountRefreshComponent___, v7, v8);
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, v9, v10);
    byte_4B15BB6 = 1;
  }
  if ( !checkDeferredPurchaseExists )
    goto LABEL_7;
  v11 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, refreshAction);
  if ( PurchaseBehaviour__IsDeferredPurchaseExists((const MethodInfo *)v11) )
  {
LABEL_7:
    HasComponent_object = (Il2CppObject *)GameObjectExtensions__HasComponent_object_(
                                            targetGameObject,
                                            (const MethodInfo_2F63FF0 *)Method_GameObjectExtensions_HasComponent_StoneCountRefreshComponent___);
    if ( ((unsigned __int8)HasComponent_object & 1) == 0 )
    {
      if ( !targetGameObject
        || (HasComponent_object = UnityEngine_GameObject__AddComponent_object_(
                                    targetGameObject,
                                    (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_StoneCountRefreshComponent___)) == 0LL )
      {
        sub_1BCAA3C(HasComponent_object, v13);
      }
      HasComponent_object[2].klass = (Il2CppClass *)refreshAction;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&HasComponent_object[2],
        (int64_t)refreshAction,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
  }
}


void __fastcall StoneCountRefreshComponent__Refresh(
        StoneCountRefreshComponent_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  struct System_Action_int__o *refreshAction; // x8

  refreshAction = this->fields._refreshAction;
  if ( refreshAction )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))refreshAction->fields.m_target)(
      refreshAction->fields.original_method_info,
      stoneCount,
      *(_QWORD *)&refreshAction->fields.extra_arg);
}


void __fastcall StoneCountRefreshComponent__RefreshAllStoneCount(const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v2; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( SelfUserGame )
    StoneCountRefreshComponent__RefreshAllStoneCount_Inner(SelfUserGame->fields.stone, v2);
}


void __fastcall StoneCountRefreshComponent__RefreshAllStoneCount_Inner(int32_t stoneCount, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Object_array *ObjectsOfType_object__49903340; // x0
  __int64 v7; // x1
  int max_length; // w8
  System_Object_array *v9; // x20
  unsigned int v10; // w21
  Il2CppObject *v11; // x8
  Il2CppClass *klass; // x8

  if ( (byte_4B15BB7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Object_FindObjectsOfType_StoneCountRefreshComponent___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B15BB7 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  ObjectsOfType_object__49903340 = UnityEngine_Object__FindObjectsOfType_object__49903340(
                                     1,
                                     (const MethodInfo_2F976EC *)Method_UnityEngine_Object_FindObjectsOfType_StoneCountRefreshComponent___);
  if ( !ObjectsOfType_object__49903340 )
    goto LABEL_15;
  max_length = ObjectsOfType_object__49903340->max_length;
  v9 = ObjectsOfType_object__49903340;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_1BCAA44(ObjectsOfType_object__49903340, v7);
      v11 = v9->m_Items[v10];
      if ( !v11 )
        break;
      klass = v11[2].klass;
      if ( klass )
        ObjectsOfType_object__49903340 = (System_Object_array *)((__int64 (__fastcall *)(Il2CppClass *, _QWORD, _QWORD))klass->_1.namespaze)(
                                                                  klass->_1.element_class,
                                                                  (unsigned int)stoneCount,
                                                                  *(_QWORD *)&klass->_1.byval_arg.bits);
      max_length = v9->max_length;
      if ( (int)++v10 >= max_length )
        return;
    }
LABEL_15:
    sub_1BCAA3C(ObjectsOfType_object__49903340, v7);
  }
}


void __fastcall StoneCountRefreshComponent__RegisterRefreshAction(
        StoneCountRefreshComponent_o *this,
        System_Action_int__o *refreshAction,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._refreshAction = refreshAction;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._refreshAction,
    (int64_t)refreshAction,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}