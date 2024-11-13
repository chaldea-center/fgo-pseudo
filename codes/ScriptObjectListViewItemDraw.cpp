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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  const MethodInfo *v37; // x1
  UnityEngine_Component_o *baseImageTexture; // x0
  System_String_o *v39; // x0
  const MethodInfo *v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Collections_ObjectModel_ObservableCollection_T__o *monitor; // x22
  ScriptObjectListViewItemDraw___c_c *v44; // x0
  System_Converter_TInput__TOutput__o *_9__3_0; // x23
  Il2CppObject *v46; // x24
  struct ScriptObjectListViewItemDraw___c_StaticFields *static_fields; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_Collections_Generic_List_object__o *v54; // x23
  UnityEngine_Component_o *v55; // x22
  _BOOL8 v56; // x0
  __int64 v57; // x1
  Il2CppObject *current; // x23
  System_String_o *v59; // x24
  System_String_o *v60; // x1
  struct UILabel_o *titleTextLabel; // x23
  System_String_o *TitleText; // x0
  System_String_o *v63; // x1
  UILabel_o *v64; // x0
  struct UILabel_o *v65; // x22
  __int64 v66; // x1
  Il2CppObject *Component_object; // x21
  float v68; // s0
  float v69; // s3
  float v70; // s1
  float v71; // s2
  System_String_o *v72; // x24
  System_String_o *v73; // x21
  System_String_o *v74; // x2
  System_String_o *v75; // x1
  Il2CppObject *v76; // x23
  System_String_o *v77; // x3
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v79; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-58h] BYREF
  int32_t result; // [xsp+4Ch] [xbp-44h] BYREF

  if ( (byte_4B139B5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Converter_DataEntityBase__ShopScriptEntity__TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestScriptMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopScriptMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ShopScriptEntity__Dispose__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ShopScriptEntity__MoveNext__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ShopScriptEntity__get_Current__, v19, v20);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenColor___, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopScriptEntity__GetEnumerator__, v23, v24);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__ShopScriptEntity___, v27, v28);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30);
    sub_1BCA7E0(&Method_ScriptObjectListViewItemDraw___c__SetItem_b__3_0__, v31, v32);
    sub_1BCA7E0(&ScriptObjectListViewItemDraw___c_TypeInfo, v33, v34);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v35, v36);
    byte_4B139B5 = 1;
  }
  result = 0;
  entity = 0LL;
  memset(&v79, 0, sizeof(v79));
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
                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
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
          v68 = 1.0;
          if ( mode == 1 )
            v68 = 0.5;
          if ( baseImageTexture )
          {
            v69 = 1.0;
            v70 = v68;
            v71 = v68;
            UIWidget__set_color((UIWidget_o *)baseImageTexture, *(UnityEngine_Color_o *)&v68, 0LL);
            return;
          }
        }
      }
LABEL_53:
      sub_1BCAA3C(baseImageTexture, v37);
    }
    baseImageTexture = (UnityEngine_Component_o *)ScriptObjectListViewItem__get_TitleText(item, v37);
    if ( !baseImageTexture )
      goto LABEL_53;
    v39 = System_String__Remove_62420040((System_String_o *)baseImageTexture, 8, 0LL);
    result = 0;
    System_Int32__TryParse(v39, &result, 0LL);
    entity = 0LL;
    if ( !result )
      goto LABEL_32;
    baseImageTexture = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseImageTexture )
      goto LABEL_53;
    baseImageTexture = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)baseImageTexture,
                                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopScriptMaster___);
    if ( !baseImageTexture )
      goto LABEL_53;
    monitor = (System_Collections_ObjectModel_ObservableCollection_T__o *)baseImageTexture[1].monitor;
    v44 = ScriptObjectListViewItemDraw___c_TypeInfo;
    if ( !ScriptObjectListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptObjectListViewItemDraw___c_TypeInfo, v37);
      v44 = ScriptObjectListViewItemDraw___c_TypeInfo;
    }
    _9__3_0 = (System_Converter_TInput__TOutput__o *)v44->static_fields->__9__3_0;
    if ( !_9__3_0 )
    {
      if ( !v44->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v44, v37);
        v44 = ScriptObjectListViewItemDraw___c_TypeInfo;
      }
      v46 = (Il2CppObject *)v44->static_fields->__9;
      _9__3_0 = (System_Converter_TInput__TOutput__o *)sub_1BCAA2C(
                                                         System_Converter_DataEntityBase__ShopScriptEntity__TypeInfo,
                                                         v37,
                                                         v41,
                                                         v42);
      System_Converter_object__object____ctor(
        _9__3_0,
        v46,
        Method_ScriptObjectListViewItemDraw___c__SetItem_b__3_0__,
        0LL);
      static_fields = ScriptObjectListViewItemDraw___c_TypeInfo->static_fields;
      static_fields->__9__3_0 = (struct System_Converter_DataEntityBase__ShopScriptEntity__o *)_9__3_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__3_0,
        (int64_t)_9__3_0,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
    }
    v54 = (System_Collections_Generic_List_object__o *)ObservableCollectionExtensions__ConvertAll_object__object_(
                                                         monitor,
                                                         (System_Converter_T__TOutput__o *)_9__3_0,
                                                         (const MethodInfo_2F98238 *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__ShopScriptEntity___);
    baseImageTexture = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseImageTexture )
      goto LABEL_53;
    baseImageTexture = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)baseImageTexture,
                                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !baseImageTexture )
      goto LABEL_53;
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)baseImageTexture,
      &entity,
      result,
      (const MethodInfo_31B2E94 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    baseImageTexture = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseImageTexture )
      goto LABEL_53;
    baseImageTexture = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)baseImageTexture,
                                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestScriptMaster___);
    if ( !baseImageTexture )
      goto LABEL_53;
    baseImageTexture = (UnityEngine_Component_o *)QuestScriptMaster__GetEntityFromQuestId(
                                                    (QuestScriptMaster_o *)baseImageTexture,
                                                    result,
                                                    0LL);
    if ( !v54 )
      goto LABEL_53;
    v55 = baseImageTexture;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v78,
      v54,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ShopScriptEntity__GetEnumerator__);
    v79 = v78;
    while ( 1 )
    {
      v56 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v79,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ShopScriptEntity__MoveNext__);
      if ( !v56 )
        break;
      current = v79.fields._current;
      if ( !v79.fields._current )
        sub_1BCAA3C(v56, v57);
      v59 = (System_String_o *)v79.fields._current[2].monitor;
      v60 = System_Int32__ToString((int32_t)&result, 0LL);
      if ( System_String__op_Equality(v59, v60, 0LL) && current[1].monitor )
        goto LABEL_28;
    }
    current = 0LL;
LABEL_28:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v79,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ShopScriptEntity__Dispose__);
    if ( result )
    {
      if ( v55 )
      {
        titleTextLabel = this->fields.titleTextLabel;
        TitleText = ScriptObjectListViewItem__get_TitleText(item, v40);
        baseImageTexture = (UnityEngine_Component_o *)System_String__Concat_62412480(
                                                        TitleText,
                                                        (System_String_o *)StringLiteral_116/*" "*/,
                                                        (System_String_o *)v55[1].klass,
                                                        0LL);
        if ( !titleTextLabel )
          goto LABEL_53;
        v63 = (System_String_o *)baseImageTexture;
        v64 = titleTextLabel;
        goto LABEL_34;
      }
      if ( current )
      {
        v65 = this->fields.titleTextLabel;
        v72 = ScriptObjectListViewItem__get_TitleText(item, v40);
        v73 = (System_String_o *)StringLiteral_116/*" "*/;
        v74 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[3].method)(
                                   current,
                                   current->klass->vtable[4].methodPtr);
        baseImageTexture = (UnityEngine_Component_o *)v72;
        v75 = v73;
      }
      else
      {
        v76 = entity;
        v65 = this->fields.titleTextLabel;
        baseImageTexture = (UnityEngine_Component_o *)ScriptObjectListViewItem__get_TitleText(item, v40);
        v77 = (System_String_o *)baseImageTexture;
        if ( !v76 )
        {
          if ( !v65 )
            goto LABEL_53;
          v64 = v65;
          v63 = v77;
          goto LABEL_34;
        }
        if ( !entity )
          goto LABEL_53;
        v74 = (System_String_o *)entity[1].monitor;
        v75 = (System_String_o *)StringLiteral_116/*" "*/;
      }
      baseImageTexture = (UnityEngine_Component_o *)System_String__Concat_62412480(
                                                      (System_String_o *)baseImageTexture,
                                                      v75,
                                                      v74,
                                                      0LL);
      if ( !v65 )
        goto LABEL_53;
    }
    else
    {
LABEL_32:
      v65 = this->fields.titleTextLabel;
      baseImageTexture = (UnityEngine_Component_o *)ScriptObjectListViewItem__get_TitleText(item, v40);
      if ( !v65 )
        goto LABEL_53;
    }
    v63 = (System_String_o *)baseImageTexture;
    v64 = v65;
LABEL_34:
    UILabel__set_text(v64, v63, 0LL);
    goto LABEL_35;
  }
}


void __fastcall ScriptObjectListViewItemDraw___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B139B6 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptObjectListViewItemDraw___c_TypeInfo, v1, v2);
    byte_4B139B6 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ScriptObjectListViewItemDraw___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ScriptObjectListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct ScriptObjectListViewItemDraw___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ScriptObjectListViewItemDraw___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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

  if ( (byte_4B139B7 & 1) == 0 )
  {
    sub_1BCA7E0(&ShopScriptEntity_TypeInfo, entity, method);
    byte_4B139B7 = 1;
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