void __fastcall StoreNodeObjectRecover___ctor(StoreNodeObjectRecover_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F7C12 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__Action___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__Action__TypeInfo, v6);
    byte_40F7C12 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                       System_Collections_Generic_Dictionary_string__Action__TypeInfo,
                                                                                       method,
                                                                                       v2,
                                                                                       v3,
                                                                                       v4);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v7,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__Action___ctor__);
  this->fields.recoverPairDictionary = (struct System_Collections_Generic_Dictionary_string__Action__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.recoverPairDictionary,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall StoreNodeObjectRecover__AddRecoverComponent(
        UnityEngine_GameObject_o *gameObject,
        HutongGames_PlayMaker_FsmGameObject_o *storeObject,
        System_Action_o *recovery,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *klass; // x0

  if ( (byte_40F7C10 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__Action__set_Item__, storeObject);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_StoreNodeObjectRecover___, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_StoreNodeObjectRecover___, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    byte_40F7C10 = 1;
  }
  if ( !gameObject )
    goto LABEL_13;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_StoreNodeObjectRecover___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                        gameObject,
                                                        (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_StoreNodeObjectRecover___);
  if ( !Component_srcLineSprite
    || !storeObject
    || (klass = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Component_srcLineSprite[1].klass) == 0LL )
  {
LABEL_13:
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    klass,
    (System_Xml_XmlQualifiedName_o *)storeObject->fields.name,
    (System_Xml_Schema_XmlSchemaObject_o *)recovery,
    (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__Action__set_Item__);
}


void __fastcall StoreNodeObjectRecover__Recovery(
        StoreNodeObjectRecover_o *this,
        System_String_o *recoverTargetVarName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__Action__o *recoverPairDictionary; // x0
  struct System_Collections_Generic_Dictionary_string__Action__o *v7; // x0
  System_Action_o *Item; // x0

  if ( (byte_40F7C11 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__Action__ContainsKey__, recoverTargetVarName);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__Action__get_Item__, v5);
    byte_40F7C11 = 1;
  }
  recoverPairDictionary = this->fields.recoverPairDictionary;
  if ( !recoverPairDictionary )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)recoverPairDictionary,
          (System_Xml_XmlQualifiedName_o *)recoverTargetVarName,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__Action__ContainsKey__) )
    return;
  v7 = this->fields.recoverPairDictionary;
  if ( !v7 )
LABEL_9:
    sub_B170D4();
  Item = (System_Action_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v7,
                              (System_Type_o *)recoverTargetVarName,
                              (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__Action__get_Item__);
  if ( Item )
    System_Action__Invoke(Item, 0LL);
}