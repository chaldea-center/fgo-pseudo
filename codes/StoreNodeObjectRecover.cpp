void __fastcall StoreNodeObjectRecover___ctor(StoreNodeObjectRecover_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_object__object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B3A5BB & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_string__Action___ctor__, method);
    sub_1BD3458(&System_Collections_Generic_Dictionary_string__Action__TypeInfo, v3);
    byte_4B3A5BB = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BD36A4(System_Collections_Generic_Dictionary_string__Action__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v4,
    (const MethodInfo_32839E4 *)Method_System_Collections_Generic_Dictionary_string__Action___ctor__);
  this->fields.recoverPairDictionary = (struct System_Collections_Generic_Dictionary_string__Action__o *)v4;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.recoverPairDictionary, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall StoreNodeObjectRecover__AddRecoverComponent(
        UnityEngine_GameObject_o *gameObject,
        HutongGames_PlayMaker_FsmGameObject_o *storeObject,
        System_Action_o *recovery,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  void *Component_object; // x22

  v6 = gameObject;
  if ( (byte_4B3A5B9 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_string__Action__set_Item__, storeObject);
    sub_1BD3458(&Method_UnityEngine_GameObject_AddComponent_StoreNodeObjectRecover___, v7);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_StoreNodeObjectRecover___, v8);
    gameObject = (UnityEngine_GameObject_o *)sub_1BD3458(&UnityEngine_Object_TypeInfo, v9);
    byte_4B3A5B9 = 1;
  }
  if ( !v6 )
    goto LABEL_12;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v6,
                       (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_StoreNodeObjectRecover___);
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
                                               (const MethodInfo_2F81994 *)Method_UnityEngine_GameObject_AddComponent_StoreNodeObjectRecover___);
    Component_object = gameObject;
  }
  if ( !Component_object
    || !storeObject
    || (gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)Component_object + 4)) == 0LL )
  {
LABEL_12:
    sub_1BD36B4(gameObject, storeObject);
  }
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)gameObject,
    (Il2CppObject *)storeObject->fields.name,
    (Il2CppObject *)recovery,
    (const MethodInfo_3284380 *)Method_System_Collections_Generic_Dictionary_string__Action__set_Item__);
}


void __fastcall StoreNodeObjectRecover__Recovery(
        StoreNodeObjectRecover_o *this,
        System_String_o *recoverTargetVarName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__Action__o *recoverPairDictionary; // x0
  Il2CppObject *Item; // x0

  if ( (byte_4B3A5BA & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_string__Action__ContainsKey__, recoverTargetVarName);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_string__Action__get_Item__, v5);
    byte_4B3A5BA = 1;
  }
  recoverPairDictionary = this->fields.recoverPairDictionary;
  if ( !recoverPairDictionary )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)recoverPairDictionary,
          (Il2CppObject *)recoverTargetVarName,
          (const MethodInfo_3284588 *)Method_System_Collections_Generic_Dictionary_string__Action__ContainsKey__) )
    return;
  recoverPairDictionary = this->fields.recoverPairDictionary;
  if ( !recoverPairDictionary )
LABEL_9:
    sub_1BD36B4(recoverPairDictionary, recoverTargetVarName);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)recoverPairDictionary,
           (Il2CppObject *)recoverTargetVarName,
           (const MethodInfo_3284314 *)Method_System_Collections_Generic_Dictionary_string__Action__get_Item__);
  if ( Item )
    ((void (__fastcall *)(Il2CppClass *, void *))Item[1].monitor)(Item[4].klass, Item[2].monitor);
}