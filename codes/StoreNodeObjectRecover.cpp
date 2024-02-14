void __fastcall StoreNodeObjectRecover___ctor(StoreNodeObjectRecover_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42135C7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__Action___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__Action__TypeInfo, v4);
    byte_42135C7 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                       System_Collections_Generic_Dictionary_string__Action__TypeInfo,
                                                                                       method,
                                                                                       v2);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v5,
    (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_string__Action___ctor__);
  this->fields.recoverPairDictionary = (struct System_Collections_Generic_Dictionary_string__Action__o *)v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.recoverPairDictionary,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
  void *Component_srcLineSprite; // x22

  v6 = gameObject;
  if ( (byte_42135C5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__Action__set_Item__, storeObject);
    sub_B0D8A4(&Method_UnityEngine_GameObject_AddComponent_StoreNodeObjectRecover___, v7);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_StoreNodeObjectRecover___, v8);
    gameObject = (UnityEngine_GameObject_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    byte_42135C5 = 1;
  }
  if ( !v6 )
    goto LABEL_13;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              v6,
                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_StoreNodeObjectRecover___);
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
                                               (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_StoreNodeObjectRecover___);
    Component_srcLineSprite = gameObject;
  }
  if ( !Component_srcLineSprite
    || !storeObject
    || (gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)Component_srcLineSprite + 3)) == 0LL )
  {
LABEL_13:
    sub_B0D97C(gameObject);
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)gameObject,
    (System_Xml_XmlQualifiedName_o *)storeObject->fields.name,
    (System_Xml_Schema_XmlSchemaObject_o *)recovery,
    (const MethodInfo_2E4AC40 *)Method_System_Collections_Generic_Dictionary_string__Action__set_Item__);
}


void __fastcall StoreNodeObjectRecover__Recovery(
        StoreNodeObjectRecover_o *this,
        System_String_o *recoverTargetVarName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__Action__o *recoverPairDictionary; // x0
  System_Action_o *Item; // x0

  if ( (byte_42135C6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__Action__ContainsKey__, recoverTargetVarName);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__Action__get_Item__, v5);
    byte_42135C6 = 1;
  }
  recoverPairDictionary = this->fields.recoverPairDictionary;
  if ( !recoverPairDictionary )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)recoverPairDictionary,
          (System_Xml_XmlQualifiedName_o *)recoverTargetVarName,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__Action__ContainsKey__) )
    return;
  recoverPairDictionary = this->fields.recoverPairDictionary;
  if ( !recoverPairDictionary )
LABEL_9:
    sub_B0D97C(recoverPairDictionary);
  Item = (System_Action_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)recoverPairDictionary,
                              (System_Type_o *)recoverTargetVarName,
                              (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__Action__get_Item__);
  if ( Item )
    System_Action__Invoke(Item, 0LL);
}