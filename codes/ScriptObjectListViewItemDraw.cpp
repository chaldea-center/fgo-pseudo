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
  System_Collections_ObjectModel_ObservableCollection_T__o *m_CachedPtr; // x22
  ScriptObjectListViewItemDraw___c_c *v12; // x0
  System_Converter_TInput__TOutput__o *_9__3_0; // x23
  Il2CppObject *v14; // x24
  struct ScriptObjectListViewItemDraw___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Collections_Generic_List_object__o *v22; // x23
  UnityEngine_Component_o *v23; // x22
  _BOOL8 v24; // x0
  __int64 v25; // x1
  Il2CppObject *current; // x23
  System_String_o *monitor; // x24
  System_String_o *v28; // x1
  struct UILabel_o *titleTextLabel; // x23
  System_String_o *TitleText; // x0
  System_String_o *v31; // x1
  UILabel_o *v32; // x0
  struct UILabel_o *v33; // x22
  Il2CppObject *Component_object; // x21
  float v35; // s0 OVERLAPPED
  float v36; // s3
  float v37; // s1
  float v38; // s2
  System_String_o *v39; // x24
  System_String_o *v40; // x21
  System_String_o *v41; // x2
  System_String_o *v42; // x1
  Il2CppObject *v43; // x23
  System_String_o *v44; // x3
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-58h] BYREF
  int32_t result; // [xsp+4Ch] [xbp-44h] BYREF

  if ( (byte_4CEBC68 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Converter_ShopScriptEntity__ShopScriptEntity__TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_QuestScriptMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ShopScriptMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__getEntityList__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ShopScriptEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ShopScriptEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ShopScriptEntity__get_Current__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ShopScriptEntity__GetEnumerator__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_ObservableCollectionExtensions_ConvertAll_ShopScriptEntity__ShopScriptEntity___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_ScriptObjectListViewItemDraw___c__SetItem_b__3_0__);
    sub_1C7BAE8(&ScriptObjectListViewItemDraw___c_TypeInfo);
    sub_1C7BAE8(&StringLiteral_113/*" "*/);
    byte_4CEBC68 = 1;
  }
  result = 0;
  entity = 0;
  memset(&v46, 0, sizeof(v46));
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
                               (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          v35 = 1.0;
          if ( mode == 1 )
            v35 = 0.5;
          if ( baseImageTexture )
          {
            v36 = 1.0;
            v37 = v35;
            v38 = v35;
            UIWidget__set_color((UIWidget_o *)baseImageTexture, *(UnityEngine_Color_o *)&v35, 0);
            return;
          }
        }
      }
LABEL_53:
      sub_1C7BD40(baseImageTexture, v7);
    }
    baseImageTexture = (UnityEngine_Component_o *)ScriptObjectListViewItem__get_TitleText(item, v7);
    if ( !baseImageTexture )
      goto LABEL_53;
    v9 = System_String__Remove_64222668((System_String_o *)baseImageTexture, 8, 0);
    result = 0;
    System_Int32__TryParse(v9, &result, 0);
    entity = 0;
    if ( !result )
      goto LABEL_32;
    baseImageTexture = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseImageTexture )
      goto LABEL_53;
    baseImageTexture = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)baseImageTexture,
                                                    (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ShopScriptMaster___);
    if ( !baseImageTexture )
      goto LABEL_53;
    m_CachedPtr = (System_Collections_ObjectModel_ObservableCollection_T__o *)baseImageTexture[1].fields.m_CachedPtr;
    v12 = ScriptObjectListViewItemDraw___c_TypeInfo;
    if ( !ScriptObjectListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptObjectListViewItemDraw___c_TypeInfo);
      v12 = ScriptObjectListViewItemDraw___c_TypeInfo;
    }
    _9__3_0 = (System_Converter_TInput__TOutput__o *)v12->static_fields->__9__3_0;
    if ( !_9__3_0 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = ScriptObjectListViewItemDraw___c_TypeInfo;
      }
      v14 = (Il2CppObject *)v12->static_fields->__9;
      _9__3_0 = (System_Converter_TInput__TOutput__o *)sub_1C7BD34(System_Converter_ShopScriptEntity__ShopScriptEntity__TypeInfo);
      System_Converter_object__object____ctor(
        _9__3_0,
        v14,
        Method_ScriptObjectListViewItemDraw___c__SetItem_b__3_0__,
        0);
      static_fields = ScriptObjectListViewItemDraw___c_TypeInfo->static_fields;
      static_fields->__9__3_0 = (struct System_Converter_ShopScriptEntity__ShopScriptEntity__o *)_9__3_0;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__3_0,
        (int32_t)_9__3_0,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    v22 = (System_Collections_Generic_List_object__o *)ObservableCollectionExtensions__ConvertAll_object__object_(
                                                         m_CachedPtr,
                                                         (System_Converter_T__TOutput__o *)_9__3_0,
                                                         (const MethodInfo_31FC94C *)Method_ObservableCollectionExtensions_ConvertAll_ShopScriptEntity__ShopScriptEntity___);
    baseImageTexture = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseImageTexture )
      goto LABEL_53;
    baseImageTexture = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)baseImageTexture,
                                                    (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !baseImageTexture )
      goto LABEL_53;
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)baseImageTexture,
      &entity,
      result,
      (const MethodInfo_342E348 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    baseImageTexture = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseImageTexture )
      goto LABEL_53;
    baseImageTexture = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)baseImageTexture,
                                                    (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestScriptMaster___);
    if ( !baseImageTexture )
      goto LABEL_53;
    baseImageTexture = (UnityEngine_Component_o *)QuestScriptMaster__GetEntityFromQuestId(
                                                    (QuestScriptMaster_o *)baseImageTexture,
                                                    result,
                                                    0);
    if ( !v22 )
      goto LABEL_53;
    v23 = baseImageTexture;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v45,
      v22,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ShopScriptEntity__GetEnumerator__);
    v46 = v45;
    while ( 1 )
    {
      v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v46,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ShopScriptEntity__MoveNext__);
      if ( !v24 )
        break;
      current = v46.fields._current;
      if ( !v46.fields._current )
        sub_1C7BD40(v24, v25);
      monitor = (System_String_o *)v46.fields._current[2].monitor;
      v28 = System_Int32__ToString((int32_t)&result, 0);
      if ( System_String__op_Equality(monitor, v28, 0) && current[1].monitor )
        goto LABEL_28;
    }
    current = 0;
LABEL_28:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v46,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ShopScriptEntity__Dispose__);
    if ( result )
    {
      if ( v23 )
      {
        titleTextLabel = this->fields.titleTextLabel;
        TitleText = ScriptObjectListViewItem__get_TitleText(item, v10);
        baseImageTexture = (UnityEngine_Component_o *)System_String__Concat_64215176(
                                                        TitleText,
                                                        (System_String_o *)StringLiteral_113/*" "*/,
                                                        (System_String_o *)v23[1].klass,
                                                        0);
        if ( !titleTextLabel )
          goto LABEL_53;
        v31 = (System_String_o *)baseImageTexture;
        v32 = titleTextLabel;
        goto LABEL_34;
      }
      if ( current )
      {
        v33 = this->fields.titleTextLabel;
        v39 = ScriptObjectListViewItem__get_TitleText(item, v10);
        v40 = (System_String_o *)StringLiteral_113/*" "*/;
        v41 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))current->klass->vtable[3].methodPtr)(
                                   current,
                                   current->klass->vtable[3].method);
        baseImageTexture = (UnityEngine_Component_o *)v39;
        v42 = v40;
      }
      else
      {
        v43 = entity;
        v33 = this->fields.titleTextLabel;
        baseImageTexture = (UnityEngine_Component_o *)ScriptObjectListViewItem__get_TitleText(item, v10);
        v44 = (System_String_o *)baseImageTexture;
        if ( !v43 )
        {
          if ( !v33 )
            goto LABEL_53;
          v32 = v33;
          v31 = v44;
          goto LABEL_34;
        }
        if ( !entity )
          goto LABEL_53;
        v41 = (System_String_o *)entity[1].monitor;
        v42 = (System_String_o *)StringLiteral_113/*" "*/;
      }
      baseImageTexture = (UnityEngine_Component_o *)System_String__Concat_64215176(
                                                      (System_String_o *)baseImageTexture,
                                                      v42,
                                                      v41,
                                                      0);
      if ( !v33 )
        goto LABEL_53;
    }
    else
    {
LABEL_32:
      v33 = this->fields.titleTextLabel;
      baseImageTexture = (UnityEngine_Component_o *)ScriptObjectListViewItem__get_TitleText(item, v10);
      if ( !v33 )
        goto LABEL_53;
    }
    v31 = (System_String_o *)baseImageTexture;
    v32 = v33;
LABEL_34:
    UILabel__set_text(v32, v31, 0);
    goto LABEL_35;
  }
}


void ScriptObjectListViewItemDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEBC69 & 1) == 0 )
  {
    sub_1C7BAE8(&ScriptObjectListViewItemDraw___c_TypeInfo);
    byte_4CEBC69 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(ScriptObjectListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ScriptObjectListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct ScriptObjectListViewItemDraw___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)ScriptObjectListViewItemDraw___c_TypeInfo->static_fields,
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