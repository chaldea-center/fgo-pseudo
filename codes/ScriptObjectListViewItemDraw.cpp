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
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Collections_Generic_List_object__o *v38; // x23
  System_String_o **v39; // x22
  _BOOL8 v40; // x0
  __int64 v41; // x1
  Il2CppObject *current; // x23
  System_String_o *monitor; // x24
  System_String_o *v44; // x1
  struct UILabel_o *titleTextLabel; // x23
  System_String_o *TitleText; // x0
  System_String_o *v47; // x1
  UILabel_o *v48; // x0
  struct UILabel_o *v49; // x22
  Il2CppObject *Component_object; // x21
  float v51; // s0
  float v52; // s3
  float v53; // s1
  float v54; // s2
  System_String_o *v55; // x24
  System_String_o *v56; // x21
  System_String_o *v57; // x2
  System_String_o *v58; // x1
  Il2CppObject *v59; // x23
  System_String_o *v60; // x3
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-58h] BYREF
  int32_t result; // [xsp+4Ch] [xbp-44h] BYREF

  if ( (byte_4BFAE9F & 1) == 0 )
  {
    sub_1C2E12C(&System_Converter_ShopScriptEntity__ShopScriptEntity__TypeInfo, item);
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestMaster___, v7);
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestScriptMaster___, v8);
    sub_1C2E12C(&Method_DataManager_GetMasterData_ShopScriptMaster___, v9);
    sub_1C2E12C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v10);
    sub_1C2E12C(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__getEntityList__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ShopScriptEntity__Dispose__, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ShopScriptEntity__MoveNext__, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ShopScriptEntity__get_Current__, v14);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_TweenColor___, v15);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ShopScriptEntity__GetEnumerator__, v16);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v17);
    sub_1C2E12C(&Method_ObservableCollectionExtensions_ConvertAll_ShopScriptEntity__ShopScriptEntity___, v18);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1C2E12C(&Method_ScriptObjectListViewItemDraw___c__SetItem_b__3_0__, v20);
    sub_1C2E12C(&ScriptObjectListViewItemDraw___c_TypeInfo, v21);
    sub_1C2E12C(&StringLiteral_117/*" "*/, v22);
    byte_4BFAE9F = 1;
  }
  result = 0;
  entity = 0LL;
  memset(&v62, 0, sizeof(v62));
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
                               (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
          v51 = 1.0;
          if ( mode == 1 )
            v51 = 0.5;
          if ( baseImageTexture )
          {
            v52 = 1.0;
            v53 = v51;
            v54 = v51;
            UIWidget__set_color((UIWidget_o *)baseImageTexture, *(UnityEngine_Color_o *)&v51, 0LL);
            return;
          }
        }
      }
LABEL_53:
      sub_1C2E388(baseImageTexture, v23);
    }
    baseImageTexture = ScriptObjectListViewItem__get_TitleText(item, v23);
    if ( !baseImageTexture )
      goto LABEL_53;
    v25 = System_String__Remove_63254404((System_String_o *)baseImageTexture, 8, 0LL);
    result = 0;
    System_Int32__TryParse(v25, &result, 0LL);
    entity = 0LL;
    if ( !result )
      goto LABEL_32;
    baseImageTexture = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseImageTexture )
      goto LABEL_53;
    baseImageTexture = DataManager__GetMasterData_object_(
                         (DataManager_o *)baseImageTexture,
                         (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ShopScriptMaster___);
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
      _9__3_0 = (System_Converter_TInput__TOutput__o *)sub_1C2E378(System_Converter_ShopScriptEntity__ShopScriptEntity__TypeInfo);
      System_Converter_object__object____ctor(
        _9__3_0,
        v30,
        Method_ScriptObjectListViewItemDraw___c__SetItem_b__3_0__,
        0LL);
      static_fields = ScriptObjectListViewItemDraw___c_TypeInfo->static_fields;
      static_fields->__9__3_0 = (struct System_Converter_ShopScriptEntity__ShopScriptEntity__o *)_9__3_0;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&static_fields->__9__3_0,
        (int64_t)_9__3_0,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
    }
    v38 = (System_Collections_Generic_List_object__o *)ObservableCollectionExtensions__ConvertAll_object__object_(
                                                         v27,
                                                         (System_Converter_T__TOutput__o *)_9__3_0,
                                                         (const MethodInfo_3058930 *)Method_ObservableCollectionExtensions_ConvertAll_ShopScriptEntity__ShopScriptEntity___);
    baseImageTexture = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseImageTexture )
      goto LABEL_53;
    baseImageTexture = DataManager__GetMasterData_object_(
                         (DataManager_o *)baseImageTexture,
                         (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !baseImageTexture )
      goto LABEL_53;
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)baseImageTexture,
      &entity,
      result,
      (const MethodInfo_327B1CC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    baseImageTexture = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseImageTexture )
      goto LABEL_53;
    baseImageTexture = DataManager__GetMasterData_object_(
                         (DataManager_o *)baseImageTexture,
                         (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestScriptMaster___);
    if ( !baseImageTexture )
      goto LABEL_53;
    baseImageTexture = QuestScriptMaster__GetEntityFromQuestId((QuestScriptMaster_o *)baseImageTexture, result, 0LL);
    if ( !v38 )
      goto LABEL_53;
    v39 = (System_String_o **)baseImageTexture;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v61,
      v38,
      (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_ShopScriptEntity__GetEnumerator__);
    v62 = v61;
    while ( 1 )
    {
      v40 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v62,
              (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_ShopScriptEntity__MoveNext__);
      if ( !v40 )
        break;
      current = v62.fields._current;
      if ( !v62.fields._current )
        sub_1C2E388(v40, v41);
      monitor = (System_String_o *)v62.fields._current[2].monitor;
      v44 = System_Int32__ToString((int32_t)&result, 0LL);
      if ( System_String__op_Equality(monitor, v44, 0LL) && current[1].monitor )
        goto LABEL_28;
    }
    current = 0LL;
LABEL_28:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v62,
      (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_ShopScriptEntity__Dispose__);
    if ( result )
    {
      if ( v39 )
      {
        titleTextLabel = this->fields.titleTextLabel;
        TitleText = ScriptObjectListViewItem__get_TitleText(item, v26);
        baseImageTexture = System_String__Concat_63246844(TitleText, (System_String_o *)StringLiteral_117/*" "*/, v39[3], 0LL);
        if ( !titleTextLabel )
          goto LABEL_53;
        v47 = (System_String_o *)baseImageTexture;
        v48 = titleTextLabel;
        goto LABEL_34;
      }
      if ( current )
      {
        v49 = this->fields.titleTextLabel;
        v55 = ScriptObjectListViewItem__get_TitleText(item, v26);
        v56 = (System_String_o *)StringLiteral_117/*" "*/;
        v57 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[3].method)(
                                   current,
                                   current->klass->vtable[4].methodPtr);
        baseImageTexture = v55;
        v58 = v56;
      }
      else
      {
        v59 = entity;
        v49 = this->fields.titleTextLabel;
        baseImageTexture = ScriptObjectListViewItem__get_TitleText(item, v26);
        v60 = (System_String_o *)baseImageTexture;
        if ( !v59 )
        {
          if ( !v49 )
            goto LABEL_53;
          v48 = v49;
          v47 = v60;
          goto LABEL_34;
        }
        if ( !entity )
          goto LABEL_53;
        v57 = (System_String_o *)entity[1].monitor;
        v58 = (System_String_o *)StringLiteral_117/*" "*/;
      }
      baseImageTexture = System_String__Concat_63246844((System_String_o *)baseImageTexture, v58, v57, 0LL);
      if ( !v49 )
        goto LABEL_53;
    }
    else
    {
LABEL_32:
      v49 = this->fields.titleTextLabel;
      baseImageTexture = ScriptObjectListViewItem__get_TitleText(item, v26);
      if ( !v49 )
        goto LABEL_53;
    }
    v47 = (System_String_o *)baseImageTexture;
    v48 = v49;
LABEL_34:
    UILabel__set_text(v48, v47, 0LL);
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

  if ( (byte_4BFAEA0 & 1) == 0 )
  {
    sub_1C2E12C(&ScriptObjectListViewItemDraw___c_TypeInfo, v1);
    byte_4BFAEA0 = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(ScriptObjectListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ScriptObjectListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct ScriptObjectListViewItemDraw___c_o *)v2;
  sub_1C2E0D0(
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
        ShopScriptEntity_o *entity,
        const MethodInfo *method)
{
  return entity;
}