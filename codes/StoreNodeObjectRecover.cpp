void __fastcall StoreNodeObjectRecover___ctor(StoreNodeObjectRecover_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v4; // x20

  if ( (byte_418577E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__Action___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__Action__TypeInfo, v3);
    byte_418577E = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__Action__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v4,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__Action___ctor__);
  this->fields.recoverPairDictionary = (struct System_Collections_Generic_Dictionary_string__Action__o *)v4;
  sub_B2C2F8(&this->fields.recoverPairDictionary, v4);
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
  if ( (byte_418577C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__Action__set_Item__, storeObject);
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_StoreNodeObjectRecover___, v7);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_StoreNodeObjectRecover___, v8);
    gameObject = (UnityEngine_GameObject_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    byte_418577C = 1;
  }
  if ( !v6 )
    goto LABEL_13;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              v6,
                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_StoreNodeObjectRecover___);
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
                                               (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_StoreNodeObjectRecover___);
    Component_srcLineSprite = gameObject;
  }
  if ( !Component_srcLineSprite
    || !storeObject
    || (gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)Component_srcLineSprite + 3)) == 0LL )
  {
LABEL_13:
    sub_B2C434(gameObject, storeObject);
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)gameObject,
    (System_Xml_XmlQualifiedName_o *)storeObject->fields.name,
    (System_Xml_Schema_XmlSchemaObject_o *)recovery,
    (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__Action__set_Item__);
}


void __fastcall StoreNodeObjectRecover__Recovery(
        StoreNodeObjectRecover_o *this,
        System_String_o *recoverTargetVarName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__Action__o *recoverPairDictionary; // x0
  System_Action_o *Item; // x0

  if ( (byte_418577D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__Action__ContainsKey__, recoverTargetVarName);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__Action__get_Item__, v5);
    byte_418577D = 1;
  }
  recoverPairDictionary = this->fields.recoverPairDictionary;
  if ( !recoverPairDictionary )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)recoverPairDictionary,
          (System_Xml_XmlQualifiedName_o *)recoverTargetVarName,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__Action__ContainsKey__) )
    return;
  recoverPairDictionary = this->fields.recoverPairDictionary;
  if ( !recoverPairDictionary )
LABEL_9:
    sub_B2C434(recoverPairDictionary, recoverTargetVarName);
  Item = (System_Action_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)recoverPairDictionary,
                              (System_Type_o *)recoverTargetVarName,
                              (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__Action__get_Item__);
  if ( Item )
    System_Action__Invoke(Item, 0LL);
}