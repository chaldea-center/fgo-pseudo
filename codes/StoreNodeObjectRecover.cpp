void __fastcall StoreNodeObjectRecover___ctor(StoreNodeObjectRecover_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E7B0A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__Action___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__Action__TypeInfo, v5, v6, v7);
    byte_42E7B0A = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__Action__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v8,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__Action___ctor__);
  this->fields.recoverPairDictionary = (struct System_Collections_Generic_Dictionary_string__Action__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.recoverPairDictionary,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall StoreNodeObjectRecover__AddRecoverComponent(
        UnityEngine_GameObject_o *gameObject,
        HutongGames_PlayMaker_FsmGameObject_o *storeObject,
        System_Action_o *recovery,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v6; // x21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  void *Component_srcLineSprite; // x22

  v6 = gameObject;
  if ( (byte_42E7B08 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__Action__set_Item__,
      (_DWORD)storeObject,
      (_DWORD)recovery,
      method);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_StoreNodeObjectRecover___, v7, v8, v9);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_StoreNodeObjectRecover___, v10, v11, v12);
    gameObject = (UnityEngine_GameObject_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    byte_42E7B08 = 1;
  }
  if ( !v6 )
    goto LABEL_13;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              v6,
                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_StoreNodeObjectRecover___);
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
                                               (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_StoreNodeObjectRecover___);
    Component_srcLineSprite = gameObject;
  }
  if ( !Component_srcLineSprite
    || !storeObject
    || (gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)Component_srcLineSprite + 3)) == 0LL )
  {
LABEL_13:
    sub_B5D69C(gameObject, storeObject);
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)gameObject,
    (System_Xml_XmlQualifiedName_o *)storeObject->fields.name,
    (System_Xml_Schema_XmlSchemaObject_o *)recovery,
    (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__Action__set_Item__);
}


void __fastcall StoreNodeObjectRecover__Recovery(
        StoreNodeObjectRecover_o *this,
        System_String_o *recoverTargetVarName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_Dictionary_string__Action__o *recoverPairDictionary; // x0
  System_Action_o *Item; // x0

  if ( (byte_42E7B09 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__Action__ContainsKey__,
      (_DWORD)recoverTargetVarName,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__Action__get_Item__, v6, v7, v8);
    byte_42E7B09 = 1;
  }
  recoverPairDictionary = this->fields.recoverPairDictionary;
  if ( !recoverPairDictionary )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)recoverPairDictionary,
          (System_Xml_XmlQualifiedName_o *)recoverTargetVarName,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__Action__ContainsKey__) )
    return;
  recoverPairDictionary = this->fields.recoverPairDictionary;
  if ( !recoverPairDictionary )
LABEL_9:
    sub_B5D69C(recoverPairDictionary, recoverTargetVarName);
  Item = (System_Action_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)recoverPairDictionary,
                              (System_Type_o *)recoverTargetVarName,
                              (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__Action__get_Item__);
  if ( Item )
    System_Action__Invoke(Item, 0LL);
}