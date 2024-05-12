void __fastcall StoreNodeObjectRecover___ctor(StoreNodeObjectRecover_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_438A58F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__Action___ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_string__Action__TypeInfo);
    byte_438A58F = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B77694(System_Collections_Generic_Dictionary_string__Action__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v3,
    (const MethodInfo_2F7CA48 *)Method_System_Collections_Generic_Dictionary_string__Action___ctor__);
  this->fields.recoverPairDictionary = (struct System_Collections_Generic_Dictionary_string__Action__o *)v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.recoverPairDictionary,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall StoreNodeObjectRecover__AddRecoverComponent(
        UnityEngine_GameObject_o *gameObject,
        HutongGames_PlayMaker_FsmGameObject_o *storeObject,
        System_Action_o *recovery,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v6; // x21
  void *Component_srcLineSprite; // x22

  v6 = gameObject;
  if ( (byte_438A58D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__Action__set_Item__);
    sub_B775C4(&Method_UnityEngine_GameObject_AddComponent_StoreNodeObjectRecover___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_StoreNodeObjectRecover___);
    gameObject = (UnityEngine_GameObject_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A58D = 1;
  }
  if ( !v6 )
    goto LABEL_13;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              v6,
                              (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_StoreNodeObjectRecover___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)Component_srcLineSprite,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                               v6,
                                               (const MethodInfo_1DEBEC8 *)Method_UnityEngine_GameObject_AddComponent_StoreNodeObjectRecover___);
    Component_srcLineSprite = gameObject;
  }
  if ( !Component_srcLineSprite
    || !storeObject
    || (gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)Component_srcLineSprite + 3)) == 0LL )
  {
LABEL_13:
    sub_B7769C(gameObject, storeObject);
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)gameObject,
    (System_Xml_XmlQualifiedName_o *)storeObject->fields.name,
    (System_Xml_Schema_XmlSchemaObject_o *)recovery,
    (const MethodInfo_2F7D5D0 *)Method_System_Collections_Generic_Dictionary_string__Action__set_Item__);
}


void __fastcall StoreNodeObjectRecover__Recovery(
        StoreNodeObjectRecover_o *this,
        System_String_o *recoverTargetVarName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__Action__o *recoverPairDictionary; // x0
  System_Action_o *Item; // x0

  if ( (byte_438A58E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__Action__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__Action__get_Item__);
    byte_438A58E = 1;
  }
  recoverPairDictionary = this->fields.recoverPairDictionary;
  if ( !recoverPairDictionary )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)recoverPairDictionary,
          (System_Xml_XmlQualifiedName_o *)recoverTargetVarName,
          (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__Action__ContainsKey__) )
    return;
  recoverPairDictionary = this->fields.recoverPairDictionary;
  if ( !recoverPairDictionary )
LABEL_9:
    sub_B7769C(recoverPairDictionary, recoverTargetVarName);
  Item = (System_Action_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)recoverPairDictionary,
                              (System_Type_o *)recoverTargetVarName,
                              (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__Action__get_Item__);
  if ( Item )
    System_Action__Invoke(Item, 0LL);
}