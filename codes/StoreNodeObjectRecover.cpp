void StoreNodeObjectRecover___ctor(StoreNodeObjectRecover_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C2ABA4 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__Action___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__Action__TypeInfo);
    byte_4C2ABA4 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_string__Action__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3449978 *)Method_System_Collections_Generic_Dictionary_string__Action___ctor__);
  this->fields.recoverPairDictionary = (struct System_Collections_Generic_Dictionary_string__Action__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.recoverPairDictionary, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void StoreNodeObjectRecover__AddRecoverComponent(
        UnityEngine_GameObject_o *gameObject,
        HutongGames_PlayMaker_FsmGameObject_o *storeObject,
        System_Action_o *recovery,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v6; // x21
  void *Component_object; // x22

  v6 = gameObject;
  if ( (byte_4C2ABA2 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__Action__set_Item__);
    sub_1C2D490(&Method_UnityEngine_GameObject_AddComponent_StoreNodeObjectRecover___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_StoreNodeObjectRecover___);
    gameObject = (UnityEngine_GameObject_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2ABA2 = 1;
  }
  if ( !v6 )
    goto LABEL_12;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v6,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_StoreNodeObjectRecover___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                               v6,
                                               (const MethodInfo_3125DE8 *)Method_UnityEngine_GameObject_AddComponent_StoreNodeObjectRecover___);
    Component_object = gameObject;
  }
  if ( !Component_object
    || !storeObject
    || (gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)Component_object + 4)) == 0 )
  {
LABEL_12:
    sub_1C2D6EC(gameObject, storeObject);
  }
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)gameObject,
    (Il2CppObject *)storeObject->fields.name,
    (Il2CppObject *)recovery,
    (const MethodInfo_344A314 *)Method_System_Collections_Generic_Dictionary_string__Action__set_Item__);
}


void StoreNodeObjectRecover__Recovery(
        StoreNodeObjectRecover_o *this,
        System_String_o *recoverTargetVarName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__Action__o *recoverPairDictionary; // x0
  Il2CppObject *Item; // x0

  if ( (byte_4C2ABA3 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__Action__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__Action__get_Item__);
    byte_4C2ABA3 = 1;
  }
  recoverPairDictionary = this->fields.recoverPairDictionary;
  if ( !recoverPairDictionary )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)recoverPairDictionary,
          (Il2CppObject *)recoverTargetVarName,
          (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__Action__ContainsKey__) )
    return;
  recoverPairDictionary = this->fields.recoverPairDictionary;
  if ( !recoverPairDictionary )
LABEL_9:
    sub_1C2D6EC(recoverPairDictionary, recoverTargetVarName);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)recoverPairDictionary,
           (Il2CppObject *)recoverTargetVarName,
           (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__Action__get_Item__);
  if ( Item )
    ((void (__fastcall *)(Il2CppClass *, void *))Item[1].monitor)(Item[4].klass, Item[2].monitor);
}