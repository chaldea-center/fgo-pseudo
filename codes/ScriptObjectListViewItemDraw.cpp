void __fastcall ScriptObjectListViewItemDraw___ctor(ScriptObjectListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptObjectListViewItemDraw__SetItem(
        ScriptObjectListViewItemDraw_o *this,
        ScriptObjectListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  const MethodInfo *v22; // x1
  UnityEngine_Component_o *baseImageTexture; // x0
  System_String_o *v24; // x0
  const MethodInfo *v25; // x1
  System_Collections_ObjectModel_ObservableCollection_T__o *monitor; // x22
  ScriptObjectListViewItemDraw___c_c *v27; // x0
  System_Converter_TInput__TOutput__o *_9__3_0; // x23
  Il2CppObject *v29; // x24
  struct ScriptObjectListViewItemDraw___c_StaticFields *static_fields; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Collections_Generic_List_object__o *v37; // x23
  UnityEngine_Component_o *v38; // x22
  _BOOL8 v39; // x0
  __int64 v40; // x1
  Il2CppObject *current; // x23
  System_String_o *v42; // x24
  System_String_o *v43; // x1
  struct UILabel_o *titleTextLabel; // x23
  System_String_o *TitleText; // x0
  System_String_o *v46; // x1
  UILabel_o *v47; // x0
  struct UILabel_o *v48; // x22
  Il2CppObject *Component_object; // x21
  float v50; // s0
  float v51; // s3
  float v52; // s1
  float v53; // s2
  System_String_o *v54; // x24
  System_String_o *v55; // x21
  System_String_o *v56; // x2
  System_String_o *v57; // x1
  Il2CppObject *v58; // x23
  System_String_o *v59; // x3
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-58h] BYREF
  int32_t result; // [xsp+4Ch] [xbp-44h] BYREF

  if ( (byte_4B3494A & 1) == 0 )
  {
    sub_1BD3458(&System_Converter_DataEntityBase__ShopScriptEntity__TypeInfo, item);
    sub_1BD3458(&Method_DataManager_GetMasterData_QuestMaster___, v7);
    sub_1BD3458(&Method_DataManager_GetMasterData_QuestScriptMaster___, v8);
    sub_1BD3458(&Method_DataManager_GetMasterData_ShopScriptMaster___, v9);
    sub_1BD3458(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_ShopScriptEntity__Dispose__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_ShopScriptEntity__MoveNext__, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_ShopScriptEntity__get_Current__, v13);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_TweenColor___, v14);
    sub_1BD3458(&Method_System_Collections_Generic_List_ShopScriptEntity__GetEnumerator__, v15);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v16);
    sub_1BD3458(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__ShopScriptEntity___, v17);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1BD3458(&Method_ScriptObjectListViewItemDraw___c__SetItem_b__3_0__, v19);
    sub_1BD3458(&ScriptObjectListViewItemDraw___c_TypeInfo, v20);
    sub_1BD3458(&StringLiteral_116/*" "*/, v21);
    byte_4B3494A = 1;
  }
  result = 0;
  entity = 0LL;
  memset(&v61, 0, sizeof(v61));
  if ( item && mode )
  {
    if ( !ScriptObjectListViewItem__get_TitleText(item, (const MethodInfo *)item) )
    {
LABEL_35:
      baseImageTexture = (UnityEngine_Component_o *)this->fields.baseImageTexture;
      if ( baseImageTexture )
      {
        baseImageTexture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseImageTexture, 0LL);
        if ( baseImageTexture )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)baseImageTexture,
                               (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          baseImageTexture = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                          (UnityEngine_Object_o *)Component_object,
                                                          0LL,
                                                          0LL);
          if ( ((unsigned __int8)baseImageTexture & 1) != 0 )
          {
            if ( !Component_object )
              goto LABEL_53;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
          }
          baseImageTexture = (UnityEngine_Component_o *)this->fields.baseImageTexture;
          v50 = 1.0;
          if ( mode == 1 )
            v50 = 0.5;
          if ( baseImageTexture )
          {
            v51 = 1.0;
            v52 = v50;
            v53 = v50;
            UIWidget__set_color((UIWidget_o *)baseImageTexture, *(UnityEngine_Color_o *)&v50, 0LL);
            return;
          }
        }
      }
LABEL_53:
      sub_1BD36B4(baseImageTexture, v22);
    }
    baseImageTexture = (UnityEngine_Component_o *)ScriptObjectListViewItem__get_TitleText(item, v22);
    if ( !baseImageTexture )
      goto LABEL_53;
    v24 = System_String__Remove_62544068((System_String_o *)baseImageTexture, 8, 0LL);
    result = 0;
    System_Int32__TryParse(v24, &result, 0LL);
    entity = 0LL;
    if ( !result )
      goto LABEL_32;
    baseImageTexture = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseImageTexture )
      goto LABEL_53;
    baseImageTexture = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)baseImageTexture,
                                                    (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ShopScriptMaster___);
    if ( !baseImageTexture )
      goto LABEL_53;
    monitor = (System_Collections_ObjectModel_ObservableCollection_T__o *)baseImageTexture[1].monitor;
    v27 = ScriptObjectListViewItemDraw___c_TypeInfo;
    if ( !ScriptObjectListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptObjectListViewItemDraw___c_TypeInfo);
      v27 = ScriptObjectListViewItemDraw___c_TypeInfo;
    }
    _9__3_0 = (System_Converter_TInput__TOutput__o *)v27->static_fields->__9__3_0;
    if ( !_9__3_0 )
    {
      if ( !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        v27 = ScriptObjectListViewItemDraw___c_TypeInfo;
      }
      v29 = (Il2CppObject *)v27->static_fields->__9;
      _9__3_0 = (System_Converter_TInput__TOutput__o *)sub_1BD36A4(System_Converter_DataEntityBase__ShopScriptEntity__TypeInfo);
      System_Converter_object__object____ctor(
        _9__3_0,
        v29,
        Method_ScriptObjectListViewItemDraw___c__SetItem_b__3_0__,
        0LL);
      static_fields = ScriptObjectListViewItemDraw___c_TypeInfo->static_fields;
      static_fields->__9__3_0 = (struct System_Converter_DataEntityBase__ShopScriptEntity__o *)_9__3_0;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&static_fields->__9__3_0,
        (int64_t)_9__3_0,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
    }
    v37 = (System_Collections_Generic_List_object__o *)ObservableCollectionExtensions__ConvertAll_object__object_(
                                                         monitor,
                                                         (System_Converter_T__TOutput__o *)_9__3_0,
                                                         (const MethodInfo_2FB76C0 *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__ShopScriptEntity___);
    baseImageTexture = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseImageTexture )
      goto LABEL_53;
    baseImageTexture = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)baseImageTexture,
                                                    (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !baseImageTexture )
      goto LABEL_53;
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)baseImageTexture,
      &entity,
      result,
      (const MethodInfo_31D1F44 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    baseImageTexture = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseImageTexture )
      goto LABEL_53;
    baseImageTexture = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)baseImageTexture,
                                                    (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_QuestScriptMaster___);
    if ( !baseImageTexture )
      goto LABEL_53;
    baseImageTexture = (UnityEngine_Component_o *)QuestScriptMaster__GetEntityFromQuestId(
                                                    (QuestScriptMaster_o *)baseImageTexture,
                                                    result,
                                                    0LL);
    if ( !v37 )
      goto LABEL_53;
    v38 = baseImageTexture;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v60,
      v37,
      (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_ShopScriptEntity__GetEnumerator__);
    v61 = v60;
    while ( 1 )
    {
      v39 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v61,
              (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_ShopScriptEntity__MoveNext__);
      if ( !v39 )
        break;
      current = v61.fields._current;
      if ( !v61.fields._current )
        sub_1BD36B4(v39, v40);
      v42 = (System_String_o *)v61.fields._current[2].monitor;
      v43 = System_Int32__ToString((int32_t)&result, 0LL);
      if ( System_String__op_Equality(v42, v43, 0LL) && current[1].monitor )
        goto LABEL_28;
    }
    current = 0LL;
LABEL_28:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v61,
      (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_ShopScriptEntity__Dispose__);
    if ( result )
    {
      if ( v38 )
      {
        titleTextLabel = this->fields.titleTextLabel;
        TitleText = ScriptObjectListViewItem__get_TitleText(item, v25);
        baseImageTexture = (UnityEngine_Component_o *)System_String__Concat_62536508(
                                                        TitleText,
                                                        (System_String_o *)StringLiteral_116/*" "*/,
                                                        (System_String_o *)v38[1].klass,
                                                        0LL);
        if ( !titleTextLabel )
          goto LABEL_53;
        v46 = (System_String_o *)baseImageTexture;
        v47 = titleTextLabel;
        goto LABEL_34;
      }
      if ( current )
      {
        v48 = this->fields.titleTextLabel;
        v54 = ScriptObjectListViewItem__get_TitleText(item, v25);
        v55 = (System_String_o *)StringLiteral_116/*" "*/;
        v56 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[3].method)(
                                   current,
                                   current->klass->vtable[4].methodPtr);
        baseImageTexture = (UnityEngine_Component_o *)v54;
        v57 = v55;
      }
      else
      {
        v58 = entity;
        v48 = this->fields.titleTextLabel;
        baseImageTexture = (UnityEngine_Component_o *)ScriptObjectListViewItem__get_TitleText(item, v25);
        v59 = (System_String_o *)baseImageTexture;
        if ( !v58 )
        {
          if ( !v48 )
            goto LABEL_53;
          v47 = v48;
          v46 = v59;
          goto LABEL_34;
        }
        if ( !entity )
          goto LABEL_53;
        v56 = (System_String_o *)entity[1].monitor;
        v57 = (System_String_o *)StringLiteral_116/*" "*/;
      }
      baseImageTexture = (UnityEngine_Component_o *)System_String__Concat_62536508(
                                                      (System_String_o *)baseImageTexture,
                                                      v57,
                                                      v56,
                                                      0LL);
      if ( !v48 )
        goto LABEL_53;
    }
    else
    {
LABEL_32:
      v48 = this->fields.titleTextLabel;
      baseImageTexture = (UnityEngine_Component_o *)ScriptObjectListViewItem__get_TitleText(item, v25);
      if ( !v48 )
        goto LABEL_53;
    }
    v46 = (System_String_o *)baseImageTexture;
    v47 = v48;
LABEL_34:
    UILabel__set_text(v47, v46, 0LL);
    goto LABEL_35;
  }
}


void __fastcall ScriptObjectListViewItemDraw___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B3494B & 1) == 0 )
  {
    sub_1BD3458(&ScriptObjectListViewItemDraw___c_TypeInfo, v1);
    byte_4B3494B = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(ScriptObjectListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ScriptObjectListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct ScriptObjectListViewItemDraw___c_o *)v2;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)ScriptObjectListViewItemDraw___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall ScriptObjectListViewItemDraw___c___ctor(
        ScriptObjectListViewItemDraw___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


ShopScriptEntity_o *__fastcall ScriptObjectListViewItemDraw___c___SetItem_b__3_0(
        ScriptObjectListViewItemDraw___c_o *this,
        DataEntityBase_o *entity,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4B3494C & 1) == 0 )
  {
    sub_1BD3458(&ShopScriptEntity_TypeInfo, entity);
    byte_4B3494C = 1;
  }
  if ( !entity )
    return 0LL;
  methodPtr_low = LOBYTE(ShopScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(entity->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (ShopScriptEntity_c *)entity->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopScriptEntity_TypeInfo )
    return (ShopScriptEntity_o *)entity;
  return 0LL;
}