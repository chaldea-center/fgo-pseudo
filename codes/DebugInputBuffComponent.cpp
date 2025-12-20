void DebugInputBuffComponent___ctor(DebugInputBuffComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2DE84 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_DebugInputSimpleSelectionElement___ctor__);
    sub_1C94098(&System_Collections_Generic_List_DebugInputSimpleSelectionElement__TypeInfo);
    byte_4D2DE84 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_DebugInputSimpleSelectionElement__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_DebugInputSimpleSelectionElement___ctor__);
  this->fields.paramInputCellList = (struct System_Collections_Generic_List_DebugInputSimpleSelectionElement__o *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.paramInputCellList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  this->fields.isFirstOpen = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void DebugInputBuffComponent__ChangeEnemyPlayerToggleValue(DebugInputBuffComponent_o *this, const MethodInfo *method)
{
  ;
}


void DebugInputBuffComponent__ChangeTargetPlayerToggleValue(DebugInputBuffComponent_o *this, const MethodInfo *method)
{
  ;
}


void DebugInputBuffComponent__CountLeft(DebugInputBuffComponent_o *this, const MethodInfo *method)
{
  UIInput_o *CountInput; // x0
  System_String_o *value; // x0
  int32_t v5; // w20
  UIInput_o *v6; // x19
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4D2DE80 & 1) == 0 )
  {
    sub_1C94098(&System_Math_TypeInfo);
    byte_4D2DE80 = 1;
  }
  result = 0;
  CountInput = this->fields.CountInput;
  if ( !CountInput )
    goto LABEL_11;
  value = UIInput__get_value(CountInput, 0);
  v5 = System_Int32__TryParse(value, &result, 0) ? result - 1 : -2;
  result = v5;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  result = System_Math__Max_65939564(-1, v5, 0);
  v6 = this->fields.CountInput;
  CountInput = (UIInput_o *)System_Int32__ToString((int32_t)&result, 0);
  if ( !v6 )
LABEL_11:
    sub_1C942F0(CountInput, method);
  UIInput__set_value(v6, (System_String_o *)CountInput, 0);
}


void DebugInputBuffComponent__CountRight(DebugInputBuffComponent_o *this, const MethodInfo *method)
{
  UIInput_o *CountInput; // x0
  System_String_o *value; // x0
  int32_t v5; // w8
  UIInput_o *v6; // x19
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  result = 0;
  CountInput = this->fields.CountInput;
  if ( !CountInput
    || ((value = UIInput__get_value(CountInput, 0), System_Int32__TryParse(value, &result, 0))
      ? (v5 = result + 1)
      : (v5 = 0),
        result = v5,
        v6 = this->fields.CountInput,
        CountInput = (UIInput_o *)System_Int32__ToString((int32_t)&result, 0),
        !v6) )
  {
    sub_1C942F0(CountInput, method);
  }
  UIInput__set_value(v6, (System_String_o *)CountInput, 0);
}


System_Int32_array *DebugInputBuffComponent__GetTargetSvtList(
        DebugInputBuffComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  UIToggle_o *value; // x0
  __int64 v5; // x1
  struct UIToggle_array *TargetPlayerToggleList; // x8
  __int64 v7; // x21
  int max_length; // w9
  struct BattleData_o *data; // x8
  struct System_Int32_array *p_entryid; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  struct UIToggle_array *TargetEnemyToggleList; // x8
  __int64 v15; // x21
  struct BattleData_o *v16; // x8
  struct UIToggle_array *v17; // x8
  int32_t v18; // w22
  struct System_Int32_array *v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10

  if ( (byte_4D2DE79 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_IndexValue_int____79050152);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D2DE79 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  TargetPlayerToggleList = this->fields.TargetPlayerToggleList;
  if ( !TargetPlayerToggleList )
    goto LABEL_38;
  v7 = 0;
  while ( 1 )
  {
    max_length = TargetPlayerToggleList->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      goto LABEL_39;
    value = TargetPlayerToggleList->m_Items[v7];
    if ( !value )
      goto LABEL_38;
    value = (UIToggle_o *)UIToggle__get_value(value, 0);
    if ( ((unsigned __int8)value & 1) != 0 )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_38;
      p_entryid = data->fields.p_entryid;
      if ( !p_entryid )
        goto LABEL_38;
      if ( (unsigned int)v7 >= LODWORD(p_entryid->max_length) )
LABEL_39:
        sub_1C942F8(value);
      v5 = (unsigned int)p_entryid->m_Items[v7];
      if ( (int)v5 >= 1 )
      {
        if ( !v3 )
          goto LABEL_38;
        items = v3->fields._items;
        v12 = Method_System_Collections_Generic_List_int__Add__;
        ++v3->fields._version;
        if ( !items )
          goto LABEL_38;
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v3,
            v5,
            *(const MethodInfo_384DE10 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = size + 1;
          items->m_Items[size] = v5;
        }
      }
    }
    TargetPlayerToggleList = this->fields.TargetPlayerToggleList;
    ++v7;
    if ( !TargetPlayerToggleList )
      goto LABEL_38;
  }
  TargetEnemyToggleList = this->fields.TargetEnemyToggleList;
  if ( !TargetEnemyToggleList )
    goto LABEL_38;
  v15 = 0;
  while ( (int)v15 < SLODWORD(TargetEnemyToggleList->max_length) )
  {
    v16 = this->fields.data;
    if ( !v16 )
      goto LABEL_38;
    value = (UIToggle_o *)BasicHelper__IndexValue_int_(
                            v16->fields.e_entryid,
                            v15,
                            -1,
                            (const MethodInfo_318A584 *)Method_BasicHelper_IndexValue_int____79050152);
    v17 = this->fields.TargetEnemyToggleList;
    if ( !v17 )
      goto LABEL_38;
    if ( (unsigned int)v15 >= LODWORD(v17->max_length) )
      goto LABEL_39;
    v18 = (int)value;
    value = v17->m_Items[v15];
    if ( !value )
      goto LABEL_38;
    value = (UIToggle_o *)UIToggle__get_value(value, 0);
    if ( v18 >= 1 && ((unsigned __int8)value & 1) != 0 )
    {
      if ( !v3 )
        goto LABEL_38;
      v19 = v3->fields._items;
      v20 = Method_System_Collections_Generic_List_int__Add__;
      ++v3->fields._version;
      if ( !v19 )
        goto LABEL_38;
      v21 = v3->fields._size;
      if ( (unsigned int)v21 >= LODWORD(v19->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v3,
          v18,
          *(const MethodInfo_384DE10 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v3->fields._size = v21 + 1;
        v19->m_Items[v21] = v18;
      }
    }
    TargetEnemyToggleList = this->fields.TargetEnemyToggleList;
    ++v15;
    if ( !TargetEnemyToggleList )
      goto LABEL_38;
  }
  if ( !v3 )
LABEL_38:
    sub_1C942F0(value, v5);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_384F8C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void DebugInputBuffComponent__InvertTargetEnemyToggleSelection(
        DebugInputBuffComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void DebugInputBuffComponent__InvertTargetPlayerToggleSelection(
        DebugInputBuffComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void DebugInputBuffComponent__OnSublitSkillId(
        DebugInputBuffComponent_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  int32_t v9; // w20
  const MethodInfo *v10; // x4
  Il2CppObject *v11; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  int32_t result; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4D2DE81 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_SkillDetailMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C94098(&Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int__TryGetEntity__);
    sub_1C94098(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C94098(&Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int__getEntitys__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2DE81 = 1;
  }
  v11 = 0;
  entity = 0;
  result = 0;
  if ( System_Int32__TryParse(value, &result, 0) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_SkillMaster___);
    entity = 0;
    Instance = (DataManager_o *)System_Int32__Parse(value, 0);
    if ( !MasterData_object )
      goto LABEL_15;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
            &entity,
            (int32_t)Instance,
            (const MethodInfo_345B50C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
      return;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_SkillDetailMaster___);
    if ( !Instance )
      goto LABEL_15;
    v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___getEntitys(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  (const MethodInfo_345A744 *)Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int__getEntitys__);
    v11 = 0;
    if ( !entity )
      goto LABEL_15;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            v8,
            &v11,
            (int32_t)entity[1].klass,
            (const MethodInfo_345B50C *)Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int__TryGetEntity__) )
      return;
    Instance = (DataManager_o *)entity;
    if ( !entity || (v9 = result, Instance = (DataManager_o *)SkillEntity__getName((SkillEntity_o *)entity, 0), !v11) )
LABEL_15:
      sub_1C942F0(Instance, v6);
    DebugInputBuffComponent__TapSkillSelectCallback(
      this,
      v9,
      (System_String_o *)Instance,
      (System_String_o *)v11[1].monitor,
      v10);
  }
}


void DebugInputBuffComponent__OnSubmit(DebugInputBuffComponent_o *this, const MethodInfo *method)
{
  UIInput_o *BuffIdInput; // x0
  System_String_o *value; // x0
  int32_t v5; // w19
  System_String_o *v6; // x0
  Il2CppObject *Instance; // x20
  Il2CppObject *v8; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4D2DE83 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C94098(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_25685/*"バフID[{0}]はマスターに存在しておりません"*/);
    sub_1C94098(&StringLiteral_25721/*"存在しないバフIDです"*/);
    byte_4D2DE83 = 1;
  }
  entity = 0;
  BuffIdInput = this->fields.BuffIdInput;
  if ( !BuffIdInput )
    goto LABEL_14;
  value = UIInput__get_value(BuffIdInput, 0);
  if ( System_String__IsNullOrEmpty(value, 0) )
  {
    v5 = 0;
  }
  else
  {
    BuffIdInput = this->fields.BuffIdInput;
    if ( !BuffIdInput )
      goto LABEL_14;
    v6 = UIInput__get_value(BuffIdInput, 0);
    v5 = System_Int32__Parse(v6, 0);
  }
  BuffIdInput = (UIInput_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !BuffIdInput )
    goto LABEL_14;
  BuffIdInput = (UIInput_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)BuffIdInput,
                               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !BuffIdInput )
    goto LABEL_14;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)BuffIdInput,
         &entity,
         v5,
         (const MethodInfo_345B50C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
  {
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = v5;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  BuffIdInput = (UIInput_o *)System_String__Format((System_String_o *)StringLiteral_25685/*"バフID[{0}]はマスターに存在しておりません"*/, v8, 0);
  if ( !Instance )
LABEL_14:
    sub_1C942F0(BuffIdInput, method);
  CommonUI__OpenErrorDialog(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_25721/*"存在しないバフIDです"*/,
    (System_String_o *)BuffIdInput,
    0,
    0,
    0);
}


void DebugInputBuffComponent__OnSubmitBuffId(
        DebugInputBuffComponent_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v8; // x5
  Il2CppObject *v9; // [xsp+0h] [xbp-30h] BYREF
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2DE7A & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C94098(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2DE7A = 1;
  }
  result = 0;
  v9 = 0;
  if ( System_Int32__TryParse(value, &result, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_10;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_BuffMaster___);
    Instance = (Il2CppObject *)System_Int32__Parse(value, 0);
    if ( !MasterData_object )
      goto LABEL_10;
    Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                 &v9,
                                 (int32_t)Instance,
                                 (const MethodInfo_345B50C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      return;
    if ( !v9 )
LABEL_10:
      sub_1C942F0(Instance, v6);
    DebugInputBuffComponent__TapBuffSelectCallback(
      this,
      result,
      (System_String_o *)v9[1].monitor,
      (System_String_o *)v9[2].klass,
      HIDWORD(v9[1].klass),
      v8);
  }
}


void DebugInputBuffComponent__Open(
        DebugInputBuffComponent_o *this,
        BattleData_o *data,
        UnityEngine_Transform_o *debugMenuTran,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct UnityEngine_Transform_o **p_debugMenuTran; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1

  this->fields.data = data;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.data,
    (int32_t)data,
    (int32_t)debugMenuTran,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  p_debugMenuTran = &this->fields.debugMenuTran;
  this->fields.debugMenuTran = debugMenuTran;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.debugMenuTran,
    (int32_t)debugMenuTran,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)*p_debugMenuTran;
  if ( !*p_debugMenuTran )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.BuffSelect;
  if ( !gameObject )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.SkillSelect;
  if ( !gameObject )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.BuffTypeSelect;
  if ( !gameObject )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  if ( this->fields.isFirstOpen )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.ScrollView;
    this->fields.isFirstOpen = 0;
    if ( gameObject )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)gameObject, 0);
      return;
    }
LABEL_14:
    sub_1C942F0(gameObject, v18);
  }
}


void DebugInputBuffComponent__OpenBuffSelect(DebugInputBuffComponent_o *this, const MethodInfo *method)
{
  DebugBuffSelectComponent_o *BuffSelect; // x20
  System_Action_T1__T2__T3__T4__o *v4; // x21
  __int64 v5; // x1
  UIToggle_o *FilterCheckBox; // x0
  const MethodInfo *v7; // x4

  if ( (byte_4D2DE7B & 1) == 0 )
  {
    sub_1C94098(&System_Action_int__string__string__int__TypeInfo);
    sub_1C94098(&Method_DebugInputBuffComponent_TapBuffSelectCallback__);
    byte_4D2DE7B = 1;
  }
  BuffSelect = this->fields.BuffSelect;
  v4 = (System_Action_T1__T2__T3__T4__o *)sub_1C942E4(System_Action_int__string__string__int__TypeInfo);
  System_Action_int__object__object__int____ctor(
    v4,
    (Il2CppObject *)this,
    Method_DebugInputBuffComponent_TapBuffSelectCallback__,
    0);
  FilterCheckBox = this->fields.FilterCheckBox;
  if ( !FilterCheckBox || (FilterCheckBox = (UIToggle_o *)UIToggle__get_value(FilterCheckBox, 0), !BuffSelect) )
    sub_1C942F0(FilterCheckBox, v5);
  DebugBuffSelectComponent__Open(
    BuffSelect,
    (System_Action_int__string__string__int__o *)v4,
    (unsigned __int8)FilterCheckBox & 1,
    this->fields.selectBuffType,
    v7);
}


void DebugInputBuffComponent__OpenBuffTypeSelect(DebugInputBuffComponent_o *this, const MethodInfo *method)
{
  DebugBuffTypeSelectComponent_o *BuffTypeSelect; // x20
  System_Action_T__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4D2DE7D & 1) == 0 )
  {
    sub_1C94098(&System_Action_BuffList_TYPE__TypeInfo);
    sub_1C94098(&Method_DebugInputBuffComponent_TapBuffTypeSelectCallback__);
    byte_4D2DE7D = 1;
  }
  BuffTypeSelect = this->fields.BuffTypeSelect;
  v4 = (System_Action_T__o *)sub_1C942E4(System_Action_BuffList_TYPE__TypeInfo);
  System_Action_Int32Enum____ctor(
    v4,
    (Il2CppObject *)this,
    Method_DebugInputBuffComponent_TapBuffTypeSelectCallback__,
    0);
  if ( !BuffTypeSelect )
    sub_1C942F0(v5, v6);
  DebugBuffTypeSelectComponent__Open(BuffTypeSelect, (System_Action_BuffList_TYPE__o *)v4, v7);
}


void DebugInputBuffComponent__OpenSkillSelect(DebugInputBuffComponent_o *this, const MethodInfo *method)
{
  DebugSkillSelectComponent_o *SkillSelect; // x20
  System_Action_T1__T2__T3__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4D2DE82 & 1) == 0 )
  {
    sub_1C94098(&System_Action_int__string__string__TypeInfo);
    sub_1C94098(&Method_DebugInputBuffComponent_TapSkillSelectCallback__);
    byte_4D2DE82 = 1;
  }
  SkillSelect = this->fields.SkillSelect;
  v4 = (System_Action_T1__T2__T3__o *)sub_1C942E4(System_Action_int__string__string__TypeInfo);
  System_Action_int__object__object____ctor(
    v4,
    (Il2CppObject *)this,
    Method_DebugInputBuffComponent_TapSkillSelectCallback__,
    0);
  if ( !SkillSelect )
    sub_1C942F0(v5, v6);
  DebugSkillSelectComponent__Open(SkillSelect, (System_Action_int__string__string__o *)v4, v7);
}


void DebugInputBuffComponent__SetAllTargetEnemyToggle(DebugInputBuffComponent_o *this, const MethodInfo *method)
{
  ;
}


void DebugInputBuffComponent__SetAllTargetPlayerToggle(DebugInputBuffComponent_o *this, const MethodInfo *method)
{
  ;
}


void DebugInputBuffComponent__TapBuffSelectCallback(
        DebugInputBuffComponent_o *this,
        int32_t id,
        System_String_o *name,
        System_String_o *detail,
        int32_t buffType,
        const MethodInfo *method)
{
  UIInput_o *BuffIdInput; // x23
  System_String_o *SelectBuffName; // x0
  __int64 v12; // x1
  struct UIInput_o *v13; // x8
  UILabel_o *label; // x23
  UILabel_o *SelectBuffTypeName; // x21
  System_Enum_o v16; // [xsp+0h] [xbp-50h] BYREF
  int32_t v17; // [xsp+10h] [xbp-40h]
  int32_t v18; // [xsp+1Ch] [xbp-34h] BYREF

  v18 = id;
  if ( (byte_4D2DE7C & 1) == 0 )
  {
    sub_1C94098(&BuffList_TYPE_TypeInfo);
    byte_4D2DE7C = 1;
  }
  BuffIdInput = this->fields.BuffIdInput;
  SelectBuffName = System_Int32__ToString((int32_t)&v18, 0);
  if ( !BuffIdInput )
    goto LABEL_10;
  UIInput__set_value(BuffIdInput, SelectBuffName, 0);
  v13 = this->fields.BuffIdInput;
  if ( !v13 )
    goto LABEL_10;
  label = v13->fields.label;
  SelectBuffName = System_Int32__ToString((int32_t)&v18, 0);
  if ( !label )
    goto LABEL_10;
  UILabel__set_text(label, SelectBuffName, 0);
  SelectBuffName = (System_String_o *)this->fields.SelectBuffName;
  if ( !SelectBuffName )
    goto LABEL_10;
  UILabel__set_text((UILabel_o *)SelectBuffName, name, 0);
  SelectBuffName = (System_String_o *)this->fields.SelectBuffDetail;
  if ( !SelectBuffName
    || (UILabel__set_text((UILabel_o *)SelectBuffName, detail, 0),
        SelectBuffTypeName = this->fields.SelectBuffTypeName,
        v16.klass = (System_Enum_c *)BuffList_TYPE_TypeInfo,
        v16.monitor = (void *)-1LL,
        v17 = buffType,
        SelectBuffName = System_Enum__ToString(&v16, 0),
        !SelectBuffTypeName) )
  {
LABEL_10:
    sub_1C942F0(SelectBuffName, v12);
  }
  UILabel__set_text(SelectBuffTypeName, SelectBuffName, 0);
  this->fields.selectBuffType = buffType;
}


void DebugInputBuffComponent__TapBuffTypeFiler(DebugInputBuffComponent_o *this, const MethodInfo *method)
{
  DebugBuffSelectComponent_o *BuffSelect; // x0

  BuffSelect = this->fields.BuffSelect;
  if ( !BuffSelect )
    sub_1C942F0(0, method);
  DebugBuffSelectComponent__RemoveList(BuffSelect, method);
}


void DebugInputBuffComponent__TapBuffTypeSelectCallback(
        DebugInputBuffComponent_o *this,
        int32_t buffType,
        const MethodInfo *method)
{
  UILabel_o *SelectBuffTypeName; // x21
  System_String_o *FilterCheckBox; // x0
  const MethodInfo *v7; // x1
  System_Enum_o v8; // [xsp+8h] [xbp-48h] BYREF
  int32_t v9; // [xsp+18h] [xbp-38h]

  if ( (byte_4D2DE7E & 1) == 0 )
  {
    sub_1C94098(&BuffList_TYPE_TypeInfo);
    byte_4D2DE7E = 1;
  }
  SelectBuffTypeName = this->fields.SelectBuffTypeName;
  v8.klass = (System_Enum_c *)BuffList_TYPE_TypeInfo;
  v8.monitor = (void *)-1LL;
  v9 = buffType;
  FilterCheckBox = System_Enum__ToString(&v8, 0);
  if ( !SelectBuffTypeName )
    goto LABEL_9;
  UILabel__set_text(SelectBuffTypeName, FilterCheckBox, 0);
  FilterCheckBox = (System_String_o *)this->fields.FilterCheckBox;
  this->fields.selectBuffType = buffType;
  if ( !FilterCheckBox )
    goto LABEL_9;
  if ( !UIToggle__get_value((UIToggle_o *)FilterCheckBox, 0) )
    return;
  FilterCheckBox = (System_String_o *)this->fields.BuffSelect;
  if ( !FilterCheckBox )
LABEL_9:
    sub_1C942F0(FilterCheckBox, v7);
  DebugBuffSelectComponent__RemoveList((DebugBuffSelectComponent_o *)FilterCheckBox, v7);
}


void DebugInputBuffComponent__TapSkillSelectCallback(
        DebugInputBuffComponent_o *this,
        int32_t id,
        System_String_o *name,
        System_String_o *detail,
        const MethodInfo *method)
{
  UIInput_o *SkillIdInput; // x22
  System_String_o *SelectSkillName; // x0
  __int64 v10; // x1
  struct UIInput_o *v11; // x8
  UILabel_o *label; // x22
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  v13 = id;
  SkillIdInput = this->fields.SkillIdInput;
  SelectSkillName = System_Int32__ToString((int32_t)&v13, 0);
  if ( !SkillIdInput )
    goto LABEL_7;
  UIInput__set_value(SkillIdInput, SelectSkillName, 0);
  v11 = this->fields.SkillIdInput;
  if ( !v11
    || (label = v11->fields.label, SelectSkillName = System_Int32__ToString((int32_t)&v13, 0), !label)
    || (UILabel__set_text(label, SelectSkillName, 0),
        (SelectSkillName = (System_String_o *)this->fields.SelectSkillName) == 0)
    || (UILabel__set_text((UILabel_o *)SelectSkillName, name, 0),
        (SelectSkillName = (System_String_o *)this->fields.SelectSkillDetail) == 0) )
  {
LABEL_7:
    sub_1C942F0(SelectSkillName, v10);
  }
  UILabel__set_text((UILabel_o *)SelectSkillName, detail, 0);
}


void DebugInputBuffComponent__TurnLeft(DebugInputBuffComponent_o *this, const MethodInfo *method)
{
  UIInput_o *TurnInput; // x0
  System_String_o *value; // x0
  int32_t v5; // w20
  UIInput_o *v6; // x19
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4D2DE7F & 1) == 0 )
  {
    sub_1C94098(&System_Math_TypeInfo);
    byte_4D2DE7F = 1;
  }
  result = 0;
  TurnInput = this->fields.TurnInput;
  if ( !TurnInput )
    goto LABEL_11;
  value = UIInput__get_value(TurnInput, 0);
  v5 = System_Int32__TryParse(value, &result, 0) ? result - 1 : -2;
  result = v5;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  result = System_Math__Max_65939564(-1, v5, 0);
  v6 = this->fields.TurnInput;
  TurnInput = (UIInput_o *)System_Int32__ToString((int32_t)&result, 0);
  if ( !v6 )
LABEL_11:
    sub_1C942F0(TurnInput, method);
  UIInput__set_value(v6, (System_String_o *)TurnInput, 0);
}


void DebugInputBuffComponent__TurnRight(DebugInputBuffComponent_o *this, const MethodInfo *method)
{
  UIInput_o *TurnInput; // x0
  System_String_o *value; // x0
  int32_t v5; // w8
  UIInput_o *v6; // x19
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  result = 0;
  TurnInput = this->fields.TurnInput;
  if ( !TurnInput
    || ((value = UIInput__get_value(TurnInput, 0), System_Int32__TryParse(value, &result, 0))
      ? (v5 = result + 1)
      : (v5 = 0),
        result = v5,
        v6 = this->fields.TurnInput,
        TurnInput = (UIInput_o *)System_Int32__ToString((int32_t)&result, 0),
        !v6) )
  {
    sub_1C942F0(TurnInput, method);
  }
  UIInput__set_value(v6, (System_String_o *)TurnInput, 0);
}


void DebugInputBuffComponent__cancel(DebugInputBuffComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *debugMenuTran; // x0

  debugMenuTran = (UnityEngine_Component_o *)this->fields.debugMenuTran;
  if ( !debugMenuTran
    || (debugMenuTran = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(debugMenuTran, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)debugMenuTran, 1, 0),
        (debugMenuTran = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0)) == 0) )
  {
    sub_1C942F0(debugMenuTran, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)debugMenuTran, 0, 0);
}