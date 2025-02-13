void __fastcall StoreNodeObjectRecover___ctor(StoreNodeObjectRecover_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDFA2B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__Action___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__Action__TypeInfo);
    byte_4BDFA2B = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_string__Action__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3315CD0 *)Method_System_Collections_Generic_Dictionary_string__Action___ctor__);
  this->fields.recoverPairDictionary = (struct System_Collections_Generic_Dictionary_string__Action__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.recoverPairDictionary, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall StoreNodeObjectRecover__AddRecoverComponent(
        UnityEngine_GameObject_o *gameObject,
        HutongGames_PlayMaker_FsmGameObject_o *storeObject,
        System_Action_o *recovery,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v6; // x21
  void *Component_object; // x22

  v6 = gameObject;
  if ( (byte_4BDFA29 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__Action__set_Item__);
    sub_1C21E38(&Method_UnityEngine_GameObject_AddComponent_StoreNodeObjectRecover___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_StoreNodeObjectRecover___);
    gameObject = (UnityEngine_GameObject_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDFA29 = 1;
  }
  if ( !v6 )
    goto LABEL_12;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v6,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_StoreNodeObjectRecover___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                               v6,
                                               (const MethodInfo_300044C *)Method_UnityEngine_GameObject_AddComponent_StoreNodeObjectRecover___);
    Component_object = gameObject;
  }
  if ( !Component_object
    || !storeObject
    || (gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)Component_object + 4)) == 0LL )
  {
LABEL_12:
    sub_1C22094(gameObject, storeObject);
  }
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)gameObject,
    (Il2CppObject *)storeObject->fields.name,
    (Il2CppObject *)recovery,
    (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__Action__set_Item__);
}


void __fastcall StoreNodeObjectRecover__Recovery(
        StoreNodeObjectRecover_o *this,
        System_String_o *recoverTargetVarName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__Action__o *recoverPairDictionary; // x0
  Il2CppObject *Item; // x0

  if ( (byte_4BDFA2A & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__Action__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__Action__get_Item__);
    byte_4BDFA2A = 1;
  }
  recoverPairDictionary = this->fields.recoverPairDictionary;
  if ( !recoverPairDictionary )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)recoverPairDictionary,
          (Il2CppObject *)recoverTargetVarName,
          (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__Action__ContainsKey__) )
    return;
  recoverPairDictionary = this->fields.recoverPairDictionary;
  if ( !recoverPairDictionary )
LABEL_9:
    sub_1C22094(recoverPairDictionary, recoverTargetVarName);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)recoverPairDictionary,
           (Il2CppObject *)recoverTargetVarName,
           (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__Action__get_Item__);
  if ( Item )
    ((void (__fastcall *)(Il2CppClass *, void *))Item[1].monitor)(Item[4].klass, Item[2].monitor);
}