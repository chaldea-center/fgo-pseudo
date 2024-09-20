void __fastcall StoneCountRefreshComponent___ctor(StoneCountRefreshComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall StoneCountRefreshComponent__AttachToGameObject(
        UnityEngine_GameObject_o *targetGameObject,
        System_Action_int__o *refreshAction,
        bool checkDeferredPurchaseExists,
        const MethodInfo *method)
{
  PurchaseBehaviour_c *v7; // x0
  Il2CppObject *HasComponent_object; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5AB32 & 1) == 0 )
  {
    sub_1B885B0(&Method_GameObjectExtensions_HasComponent_StoneCountRefreshComponent___);
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_StoneCountRefreshComponent___);
    sub_1B885B0(&PurchaseBehaviour_TypeInfo);
    byte_4A5AB32 = 1;
  }
  if ( !checkDeferredPurchaseExists )
    goto LABEL_7;
  v7 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  if ( PurchaseBehaviour__IsDeferredPurchaseExists((const MethodInfo *)v7) )
  {
LABEL_7:
    HasComponent_object = (Il2CppObject *)GameObjectExtensions__HasComponent_object_(
                                            targetGameObject,
                                            (const MethodInfo_2ED07D8 *)Method_GameObjectExtensions_HasComponent_StoneCountRefreshComponent___);
    if ( ((unsigned __int8)HasComponent_object & 1) == 0 )
    {
      if ( !targetGameObject
        || (HasComponent_object = UnityEngine_GameObject__AddComponent_object_(
                                    targetGameObject,
                                    (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_StoneCountRefreshComponent___)) == 0LL )
      {
        sub_1B8880C(HasComponent_object, v9);
      }
      HasComponent_object[2].klass = (Il2CppClass *)refreshAction;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&HasComponent_object[2], (int32_t)refreshAction, v10, v11);
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
  System_Object_array *ObjectsOfType_object__49297324; // x0
  __int64 v4; // x1
  int max_length; // w8
  System_Object_array *v6; // x20
  unsigned int v7; // w21
  Il2CppObject *v8; // x8
  Il2CppClass *klass; // x8

  if ( (byte_4A5AB33 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Object_FindObjectsOfType_StoneCountRefreshComponent___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5AB33 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ObjectsOfType_object__49297324 = UnityEngine_Object__FindObjectsOfType_object__49297324(
                                     1,
                                     (const MethodInfo_2F037AC *)Method_UnityEngine_Object_FindObjectsOfType_StoneCountRefreshComponent___);
  if ( !ObjectsOfType_object__49297324 )
    goto LABEL_15;
  max_length = ObjectsOfType_object__49297324->max_length;
  v6 = ObjectsOfType_object__49297324;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_1B88814(ObjectsOfType_object__49297324, v4);
      v8 = v6->m_Items[v7];
      if ( !v8 )
        break;
      klass = v8[2].klass;
      if ( klass )
        ObjectsOfType_object__49297324 = (System_Object_array *)((__int64 (__fastcall *)(Il2CppClass *, _QWORD, _QWORD))klass->_1.namespaze)(
                                                                  klass->_1.element_class,
                                                                  (unsigned int)stoneCount,
                                                                  *(_QWORD *)&klass->_1.byval_arg.bits);
      max_length = v6->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_15:
    sub_1B8880C(ObjectsOfType_object__49297324, v4);
  }
}


void __fastcall StoneCountRefreshComponent__RegisterRefreshAction(
        StoneCountRefreshComponent_o *this,
        System_Action_int__o *refreshAction,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._refreshAction = refreshAction;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._refreshAction,
    (int32_t)refreshAction,
    (int32_t)method,
    v3);
}