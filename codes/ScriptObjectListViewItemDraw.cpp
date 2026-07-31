void ScriptObjectListViewItemDraw___ctor(ScriptObjectListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScriptObjectListViewItemDraw__SetItem(
        ScriptObjectListViewItemDraw_o *this,
        ScriptObjectListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  UnityEngine_Component_o *baseImageTexture; // x0
  System_String_o *v9; // x0
  const MethodInfo *v10; // x1
  __int64 v11; // x2
  System_Collections_ObjectModel_ObservableCollection_T__o *m_CachedPtr; // x22
  ScriptObjectListViewItemDraw___c_c *v13; // x0
  struct ScriptObjectListViewItemDraw___c_StaticFields *static_fields; // x8
  System_Converter_TInput__TOutput__o *_9__3_0; // x23
  Il2CppObject *v16; // x24
  struct ScriptObjectListViewItemDraw___c_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_List_object__o *v24; // x23
  UnityEngine_Component_o *v25; // x22
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *current; // x23
  System_String_o *monitor; // x24
  System_String_o *v30; // x1
  struct UILabel_o *titleTextLabel; // x23
  System_String_o *TitleText; // x0
  System_String_o *v33; // x1
  UILabel_o *v34; // x0
  struct UILabel_o *v35; // x22
  __int64 v36; // x1
  __int64 v37; // x2
  Il2CppObject *Component_object; // x21
  float v39; // s0 OVERLAPPED
  float v40; // s3
  float v41; // s1
  float v42; // s2
  System_String_o *v43; // x24
  System_String_o *v44; // x21
  System_String_o *v45; // x2
  System_String_o *v46; // x1
  Il2CppObject *v47; // x23
  System_String_o *v48; // x3
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-58h] BYREF
  int32_t result; // [xsp+4Ch] [xbp-44h] BYREF

  if ( (byte_5935BE4 & 1) == 0 )
  {
    sub_21FFC50(&System_Converter_ShopScriptEntity__ShopScriptEntity__TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestScriptMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ShopScriptMaster___);
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__getEntityList__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ShopScriptEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ShopScriptEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ShopScriptEntity__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopScriptEntity__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_ObservableCollectionExtensions_ConvertAll_ShopScriptEntity__ShopScriptEntity___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_ScriptObjectListViewItemDraw___c__SetItem_b__3_0__);
    sub_21FFC50(&ScriptObjectListViewItemDraw___c_TypeInfo);
    sub_21FFC50(&StringLiteral_113/*" "*/);
    byte_5935BE4 = 1;
  }
  result = 0;
  entity = 0;
  memset(&v50, 0, sizeof(v50));
  if ( item && mode )
  {
    if ( !ScriptObjectListViewItem__get_TitleText(item, (const MethodInfo *)item) )
    {
LABEL_35:
      baseImageTexture = (UnityEngine_Component_o *)this->fields.baseImageTexture;
      if ( baseImageTexture )
      {
        baseImageTexture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseImageTexture, 0);
        if ( baseImageTexture )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)baseImageTexture,
                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36, v37);
          baseImageTexture = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                          (UnityEngine_Object_o *)Component_object,
                                                          0,
                                                          0);
          if ( ((unsigned __int8)baseImageTexture & 1) != 0 )
          {
            if ( !Component_object )
              goto LABEL_53;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
          }
          baseImageTexture = (UnityEngine_Component_o *)this->fields.baseImageTexture;
          if ( baseImageTexture )
          {
            v39 = 1.0;
            v40 = 1.0;
            if ( mode == 1 )
              v39 = 0.5;
            v41 = v39;
            v42 = v39;
            UIWidget__set_color((UIWidget_o *)baseImageTexture, *(UnityEngine_Color_o *)&v39, 0);
            return;
          }
        }
      }
LABEL_53:
      sub_21FFECC(baseImageTexture, v7);
    }
    baseImageTexture = (UnityEngine_Component_o *)ScriptObjectListViewItem__get_TitleText(item, v7);
    if ( !baseImageTexture )
      goto LABEL_53;
    v9 = System_String__Remove_75489360((System_String_o *)baseImageTexture, 8, 0);
    result = 0;
    System_Int32__TryParse(v9, &result, 0);
    entity = 0;
    if ( !result )
      goto LABEL_32;
    baseImageTexture = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseImageTexture )
      goto LABEL_53;
    baseImageTexture = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)baseImageTexture,
                                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ShopScriptMaster___);
    if ( !baseImageTexture )
      goto LABEL_53;
    m_CachedPtr = (System_Collections_ObjectModel_ObservableCollection_T__o *)baseImageTexture[1].fields.m_CachedPtr;
    v13 = ScriptObjectListViewItemDraw___c_TypeInfo;
    if ( !*(&ScriptObjectListViewItemDraw___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ScriptObjectListViewItemDraw___c_TypeInfo, v7, v11);
      v13 = ScriptObjectListViewItemDraw___c_TypeInfo;
    }
    static_fields = v13->static_fields;
    _9__3_0 = (System_Converter_TInput__TOutput__o *)static_fields->__9__3_0;
    if ( !_9__3_0 )
    {
      if ( !*(&v13->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v13, v7, v11);
        static_fields = ScriptObjectListViewItemDraw___c_TypeInfo->static_fields;
      }
      v16 = (Il2CppObject *)static_fields->__9;
      _9__3_0 = (System_Converter_TInput__TOutput__o *)sub_21FFEBC(System_Converter_ShopScriptEntity__ShopScriptEntity__TypeInfo);
      System_Converter_object__object____ctor(
        _9__3_0,
        v16,
        Method_ScriptObjectListViewItemDraw___c__SetItem_b__3_0__,
        0);
      v17 = ScriptObjectListViewItemDraw___c_TypeInfo->static_fields;
      v17->__9__3_0 = (struct System_Converter_ShopScriptEntity__ShopScriptEntity__o *)_9__3_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v17->__9__3_0, (int32_t)_9__3_0, v18, v19, v20, v21, v22, v23);
    }
    v24 = (System_Collections_Generic_List_object__o *)ObservableCollectionExtensions__ConvertAll_object__object_(
                                                         m_CachedPtr,
                                                         (System_Converter_T__TOutput__o *)_9__3_0,
                                                         (const MethodInfo_38C0A74 *)Method_ObservableCollectionExtensions_ConvertAll_ShopScriptEntity__ShopScriptEntity___);
    baseImageTexture = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseImageTexture )
      goto LABEL_53;
    baseImageTexture = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)baseImageTexture,
                                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !baseImageTexture )
      goto LABEL_53;
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)baseImageTexture,
      &entity,
      result,
      (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    baseImageTexture = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseImageTexture )
      goto LABEL_53;
    baseImageTexture = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)baseImageTexture,
                                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestScriptMaster___);
    if ( !baseImageTexture )
      goto LABEL_53;
    baseImageTexture = (UnityEngine_Component_o *)QuestScriptMaster__GetEntityFromQuestId(
                                                    (QuestScriptMaster_o *)baseImageTexture,
                                                    result,
                                                    0);
    if ( !v24 )
      goto LABEL_53;
    v25 = baseImageTexture;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v49,
      v24,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ShopScriptEntity__GetEnumerator__);
    v50 = v49;
    v49.fields._list = 0;
    *(_QWORD *)&v49.fields._index = &v50;
    while ( 1 )
    {
      v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v50,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ShopScriptEntity__MoveNext__);
      if ( !v26 )
        break;
      current = v50.fields._current;
      if ( !v50.fields._current )
        sub_21FFECC(v26, v27);
      monitor = (System_String_o *)v50.fields._current[2].monitor;
      v30 = System_Int32__ToString((int32_t)&result, 0);
      if ( System_String__op_Equality(monitor, v30, 0) && current[1].monitor )
        goto LABEL_28;
    }
    current = 0;
LABEL_28:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v50,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ShopScriptEntity__Dispose__);
    if ( result )
    {
      if ( v25 )
      {
        titleTextLabel = this->fields.titleTextLabel;
        TitleText = ScriptObjectListViewItem__get_TitleText(item, v10);
        baseImageTexture = (UnityEngine_Component_o *)System_String__Concat_75481624(
                                                        TitleText,
                                                        (System_String_o *)StringLiteral_113/*" "*/,
                                                        (System_String_o *)v25[1].klass,
                                                        0);
        if ( !titleTextLabel )
          goto LABEL_53;
        v33 = (System_String_o *)baseImageTexture;
        v34 = titleTextLabel;
        goto LABEL_34;
      }
      if ( current )
      {
        v35 = this->fields.titleTextLabel;
        v43 = ScriptObjectListViewItem__get_TitleText(item, v10);
        v44 = (System_String_o *)StringLiteral_113/*" "*/;
        v45 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))current->klass->vtable[3].methodPtr)(
                                   current,
                                   current->klass->vtable[3].method);
        baseImageTexture = (UnityEngine_Component_o *)v43;
        v46 = v44;
      }
      else
      {
        v47 = entity;
        v35 = this->fields.titleTextLabel;
        baseImageTexture = (UnityEngine_Component_o *)ScriptObjectListViewItem__get_TitleText(item, v10);
        v48 = (System_String_o *)baseImageTexture;
        if ( !v47 )
        {
          if ( !v35 )
            goto LABEL_53;
          v34 = v35;
          v33 = v48;
          goto LABEL_34;
        }
        if ( !entity )
          goto LABEL_53;
        v45 = (System_String_o *)entity[1].monitor;
        v46 = (System_String_o *)StringLiteral_113/*" "*/;
      }
      baseImageTexture = (UnityEngine_Component_o *)System_String__Concat_75481624(
                                                      (System_String_o *)baseImageTexture,
                                                      v46,
                                                      v45,
                                                      0);
      if ( !v35 )
        goto LABEL_53;
    }
    else
    {
LABEL_32:
      v35 = this->fields.titleTextLabel;
      baseImageTexture = (UnityEngine_Component_o *)ScriptObjectListViewItem__get_TitleText(item, v10);
      if ( !v35 )
        goto LABEL_53;
    }
    v33 = (System_String_o *)baseImageTexture;
    v34 = v35;
LABEL_34:
    UILabel__set_text(v34, v33, 0);
    goto LABEL_35;
  }
}


void ScriptObjectListViewItemDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5935BE5 & 1) == 0 )
  {
    sub_21FFC50(&ScriptObjectListViewItemDraw___c_TypeInfo);
    byte_5935BE5 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ScriptObjectListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ScriptObjectListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct ScriptObjectListViewItemDraw___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ScriptObjectListViewItemDraw___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ScriptObjectListViewItemDraw___c___ctor(ScriptObjectListViewItemDraw___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


ShopScriptEntity_o *ScriptObjectListViewItemDraw___c___SetItem_b__3_0(
        ScriptObjectListViewItemDraw___c_o *this,
        ShopScriptEntity_o *entity,
        const MethodInfo *method)
{
  return entity;
}