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
  __int64 v22; // x1
  const MethodInfo *v23; // x1
  void *baseImageTexture; // x0
  System_String_o *v25; // x0
  const MethodInfo *v26; // x1
  System_Collections_ObjectModel_ObservableCollection_T__o *v27; // x22
  ScriptObjectListViewItemDraw___c_c *v28; // x0
  System_Converter_TInput__TOutput__o *_9__3_0; // x23
  Il2CppObject *v30; // x24
  struct ScriptObjectListViewItemDraw___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Collections_Generic_List_object__o *v34; // x23
  System_String_o **v35; // x22
  _BOOL8 v36; // x0
  __int64 v37; // x1
  Il2CppObject *current; // x23
  System_String_o *monitor; // x24
  System_String_o *v40; // x1
  struct UILabel_o *titleTextLabel; // x23
  System_String_o *TitleText; // x0
  System_String_o *v43; // x1
  UILabel_o *v44; // x0
  struct UILabel_o *v45; // x22
  Il2CppObject *Component_object; // x21
  float v47; // s0
  float v48; // s3
  float v49; // s1
  float v50; // s2
  System_String_o *v51; // x24
  System_String_o *v52; // x21
  System_String_o *v53; // x2
  System_String_o *v54; // x1
  Il2CppObject *v55; // x23
  System_String_o *v56; // x3
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-58h] BYREF
  int32_t result; // [xsp+4Ch] [xbp-44h] BYREF

  if ( (byte_4B19B6B & 1) == 0 )
  {
    sub_1BCAFF8(&System_Converter_ShopScriptEntity__ShopScriptEntity__TypeInfo, item);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestMaster___, v7);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestScriptMaster___, v8);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ShopScriptMaster___, v9);
    sub_1BCAFF8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v10);
    sub_1BCAFF8(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__getEntityList__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ShopScriptEntity__Dispose__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ShopScriptEntity__MoveNext__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ShopScriptEntity__get_Current__, v14);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_TweenColor___, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopScriptEntity__GetEnumerator__, v16);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v17);
    sub_1BCAFF8(&Method_ObservableCollectionExtensions_ConvertAll_ShopScriptEntity__ShopScriptEntity___, v18);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1BCAFF8(&Method_ScriptObjectListViewItemDraw___c__SetItem_b__3_0__, v20);
    sub_1BCAFF8(&ScriptObjectListViewItemDraw___c_TypeInfo, v21);
    sub_1BCAFF8(&StringLiteral_113/*" "*/, v22);
    byte_4B19B6B = 1;
  }
  result = 0;
  entity = 0LL;
  memset(&v58, 0, sizeof(v58));
  if ( item && mode )
  {
    if ( !ScriptObjectListViewItem__get_TitleText(item, (const MethodInfo *)item) )
    {
LABEL_35:
      baseImageTexture = this->fields.baseImageTexture;
      if ( baseImageTexture )
      {
        baseImageTexture = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseImageTexture, 0LL);
        if ( baseImageTexture )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)baseImageTexture,
                               (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          baseImageTexture = (void *)UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)Component_object,
                                       0LL,
                                       0LL);
          if ( ((unsigned __int8)baseImageTexture & 1) != 0 )
          {
            if ( !Component_object )
              goto LABEL_53;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
          }
          baseImageTexture = this->fields.baseImageTexture;
          v47 = 1.0;
          if ( mode == 1 )
            v47 = 0.5;
          if ( baseImageTexture )
          {
            v48 = 1.0;
            v49 = v47;
            v50 = v47;
            UIWidget__set_color((UIWidget_o *)baseImageTexture, *(UnityEngine_Color_o *)&v47, 0LL);
            return;
          }
        }
      }
LABEL_53:
      sub_1BCB254(baseImageTexture, v23);
    }
    baseImageTexture = ScriptObjectListViewItem__get_TitleText(item, v23);
    if ( !baseImageTexture )
      goto LABEL_53;
    v25 = System_String__Remove_62496164((System_String_o *)baseImageTexture, 8, 0LL);
    result = 0;
    System_Int32__TryParse(v25, &result, 0LL);
    entity = 0LL;
    if ( !result )
      goto LABEL_32;
    baseImageTexture = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseImageTexture )
      goto LABEL_53;
    baseImageTexture = DataManager__GetMasterData_object_(
                         (DataManager_o *)baseImageTexture,
                         (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ShopScriptMaster___);
    if ( !baseImageTexture )
      goto LABEL_53;
    v27 = (System_Collections_ObjectModel_ObservableCollection_T__o *)*((_QWORD *)baseImageTexture + 5);
    v28 = ScriptObjectListViewItemDraw___c_TypeInfo;
    if ( !ScriptObjectListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptObjectListViewItemDraw___c_TypeInfo);
      v28 = ScriptObjectListViewItemDraw___c_TypeInfo;
    }
    _9__3_0 = (System_Converter_TInput__TOutput__o *)v28->static_fields->__9__3_0;
    if ( !_9__3_0 )
    {
      if ( !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        v28 = ScriptObjectListViewItemDraw___c_TypeInfo;
      }
      v30 = (Il2CppObject *)v28->static_fields->__9;
      _9__3_0 = (System_Converter_TInput__TOutput__o *)sub_1BCB244(System_Converter_ShopScriptEntity__ShopScriptEntity__TypeInfo);
      System_Converter_object__object____ctor(
        _9__3_0,
        v30,
        Method_ScriptObjectListViewItemDraw___c__SetItem_b__3_0__,
        0LL);
      static_fields = ScriptObjectListViewItemDraw___c_TypeInfo->static_fields;
      static_fields->__9__3_0 = (struct System_Converter_ShopScriptEntity__ShopScriptEntity__o *)_9__3_0;
      sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v32, v33);
    }
    v34 = (System_Collections_Generic_List_object__o *)ObservableCollectionExtensions__ConvertAll_object__object_(
                                                         v27,
                                                         (System_Converter_T__TOutput__o *)_9__3_0,
                                                         (const MethodInfo_30A4650 *)Method_ObservableCollectionExtensions_ConvertAll_ShopScriptEntity__ShopScriptEntity___);
    baseImageTexture = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseImageTexture )
      goto LABEL_53;
    baseImageTexture = DataManager__GetMasterData_object_(
                         (DataManager_o *)baseImageTexture,
                         (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !baseImageTexture )
      goto LABEL_53;
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)baseImageTexture,
      &entity,
      result,
      (const MethodInfo_32C7E4C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    baseImageTexture = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseImageTexture )
      goto LABEL_53;
    baseImageTexture = DataManager__GetMasterData_object_(
                         (DataManager_o *)baseImageTexture,
                         (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestScriptMaster___);
    if ( !baseImageTexture )
      goto LABEL_53;
    baseImageTexture = QuestScriptMaster__GetEntityFromQuestId((QuestScriptMaster_o *)baseImageTexture, result, 0LL);
    if ( !v34 )
      goto LABEL_53;
    v35 = (System_String_o **)baseImageTexture;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v57,
      v34,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_ShopScriptEntity__GetEnumerator__);
    v58 = v57;
    while ( 1 )
    {
      v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v58,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_ShopScriptEntity__MoveNext__);
      if ( !v36 )
        break;
      current = v58.fields._current;
      if ( !v58.fields._current )
        sub_1BCB254(v36, v37);
      monitor = (System_String_o *)v58.fields._current[2].monitor;
      v40 = System_Int32__ToString((int32_t)&result, 0LL);
      if ( System_String__op_Equality(monitor, v40, 0LL) && current[1].monitor )
        goto LABEL_28;
    }
    current = 0LL;
LABEL_28:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v58,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_ShopScriptEntity__Dispose__);
    if ( result )
    {
      if ( v35 )
      {
        titleTextLabel = this->fields.titleTextLabel;
        TitleText = ScriptObjectListViewItem__get_TitleText(item, v26);
        baseImageTexture = System_String__Concat_62488672(TitleText, (System_String_o *)StringLiteral_113/*" "*/, v35[3], 0LL);
        if ( !titleTextLabel )
          goto LABEL_53;
        v43 = (System_String_o *)baseImageTexture;
        v44 = titleTextLabel;
        goto LABEL_34;
      }
      if ( current )
      {
        v45 = this->fields.titleTextLabel;
        v51 = ScriptObjectListViewItem__get_TitleText(item, v26);
        v52 = (System_String_o *)StringLiteral_113/*" "*/;
        v53 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[3].method)(
                                   current,
                                   current->klass->vtable[4].methodPtr);
        baseImageTexture = v51;
        v54 = v52;
      }
      else
      {
        v55 = entity;
        v45 = this->fields.titleTextLabel;
        baseImageTexture = ScriptObjectListViewItem__get_TitleText(item, v26);
        v56 = (System_String_o *)baseImageTexture;
        if ( !v55 )
        {
          if ( !v45 )
            goto LABEL_53;
          v44 = v45;
          v43 = v56;
          goto LABEL_34;
        }
        if ( !entity )
          goto LABEL_53;
        v53 = (System_String_o *)entity[1].monitor;
        v54 = (System_String_o *)StringLiteral_113/*" "*/;
      }
      baseImageTexture = System_String__Concat_62488672((System_String_o *)baseImageTexture, v54, v53, 0LL);
      if ( !v45 )
        goto LABEL_53;
    }
    else
    {
LABEL_32:
      v45 = this->fields.titleTextLabel;
      baseImageTexture = ScriptObjectListViewItem__get_TitleText(item, v26);
      if ( !v45 )
        goto LABEL_53;
    }
    v43 = (System_String_o *)baseImageTexture;
    v44 = v45;
LABEL_34:
    UILabel__set_text(v44, v43, 0LL);
    goto LABEL_35;
  }
}


void __fastcall ScriptObjectListViewItemDraw___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B19B6C & 1) == 0 )
  {
    sub_1BCAFF8(&ScriptObjectListViewItemDraw___c_TypeInfo, v1);
    byte_4B19B6C = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(ScriptObjectListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ScriptObjectListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct ScriptObjectListViewItemDraw___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)ScriptObjectListViewItemDraw___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall ScriptObjectListViewItemDraw___c___ctor(
        ScriptObjectListViewItemDraw___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


ShopScriptEntity_o *__fastcall ScriptObjectListViewItemDraw___c___SetItem_b__3_0(
        ScriptObjectListViewItemDraw___c_o *this,
        ShopScriptEntity_o *entity,
        const MethodInfo *method)
{
  return entity;
}