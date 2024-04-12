void __fastcall ServantEquipEffectFilterController___ctor(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_VoiceCondType_Type__o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_Dictionary_int__int__o *v33; // x20
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_42B2EAE & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo);
    byte_42B2EAE = 1;
  }
  LODWORD(this->fields.SvtEqDisplayGroups) = 12;
  v3 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B52A54(System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v3,
    (const MethodInfo_305922C *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__);
  if ( !v3 )
    goto LABEL_7;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    1,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    2,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    3,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    4,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  this->fields.CommandCodeDisplayGroups = (struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.CommandCodeDisplayGroups,
    (System_Int32_array **)v3,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B52A54(System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v12,
    (const MethodInfo_305922C *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__);
  if ( !v12 )
    goto LABEL_7;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    1,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    2,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    3,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    8,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    5,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    6,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    7,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  this->fields.SvtDisplayGroups = (struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *)v12;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.SvtDisplayGroups,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B52A54(System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v19,
    (const MethodInfo_305922C *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__);
  if ( !v19 )
LABEL_7:
    sub_B52A5C(v4, v5);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    1,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    2,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    3,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    8,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    5,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    6,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    7,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  this->fields.titleLabel = (struct UILabel_o *)v19;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.titleLabel,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int__o *)v26;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.defaultFilterData,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v33,
    (const MethodInfo_2EFEEF8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.onClickEvent = (struct System_Action_o *)v33;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.onClickEvent,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterController__Init(
        ServantEquipEffectFilterController_o *this,
        ListViewSort_o *sort,
        int32_t categoryFlag,
        System_Action_o *onclickEvent,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  ServantEquipEffectFilterController_c *titleLabel; // x1
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1

  this->fields.containerList = (struct System_Collections_Generic_List_ServantEquipEffectFilterContainer__o *)sort;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.containerList,
    (System_Int32_array **)sort,
    *(System_String_array ***)&categoryFlag,
    (System_String_array **)onclickEvent,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  *(_QWORD *)&this->fields.categoryFlag = onclickEvent;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.categoryFlag,
    (System_Int32_array **)onclickEvent,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  LODWORD(this->fields.displayGroups) = categoryFlag;
  switch ( categoryFlag )
  {
    case 4:
      titleLabel = (ServantEquipEffectFilterController_c *)this->fields.titleLabel;
      goto LABEL_7;
    case 2:
      titleLabel = (ServantEquipEffectFilterController_c *)this->fields.SvtDisplayGroups;
      goto LABEL_7;
    case 1:
      titleLabel = (ServantEquipEffectFilterController_c *)this->fields.CommandCodeDisplayGroups;
LABEL_7:
      this[1].klass = titleLabel;
      sub_B52920(
        (BattleServantConfConponent_o *)&this[1],
        (System_Int32_array **)titleLabel,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      break;
  }
  ServantEquipEffectFilterController__SetupLabelObject(this, v17);
  ServantEquipEffectFilterController__SetDefaultFilterData(this, v25);
  ServantEquipEffectFilterController__RefreshContainers(this, v26);
}


bool __fastcall ServantEquipEffectFilterController__IsChangeFilterData(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *onClickEvent; // x0
  __int64 v4; // x1
  ListViewSort_o *containerList; // x0
  int key_high; // x20^4
  char v7; // w19
  int v8; // w20
  __int128 v10[2]; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v11; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42B2EA8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    byte_42B2EA8 = 1;
  }
  memset(&v11, 0, 32);
  onClickEvent = this->fields.onClickEvent;
  if ( !onClickEvent )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v10,
    (System_Collections_Generic_Dictionary_int__int__o *)onClickEvent,
    (const MethodInfo_2F00010 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v11.fields.dictionary = v10[0];
  v11.fields.current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v10[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v11,
            (const MethodInfo_2886FC0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    containerList = (ListViewSort_o *)this->fields.containerList;
    if ( !containerList )
      sub_B52A5C(0LL, v4);
    key_high = HIDWORD(v11.fields.current.fields.key);
    if ( ListViewSort__GetSvtEquipEffectFilterInt(containerList, (int32_t)v11.fields.current.fields.key, 0LL) != key_high )
    {
      v7 = 1;
      v8 = 16;
      goto LABEL_10;
    }
  }
  v7 = 0;
  v8 = 14;
LABEL_10:
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v11,
    (const MethodInfo_2887108 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  return (v8 == 16) & v7;
}


bool __fastcall ServantEquipEffectFilterController__IsMatchEffectCategory(
        System_Int32_array *cateforyIdList,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v3; // x8
  System_Int32_array *v4; // x20
  unsigned __int64 v6; // x21
  __int64 v7; // x0

  if ( cateforyIdList )
  {
    v3 = *(_QWORD *)&cateforyIdList->max_length;
    v4 = cateforyIdList;
    if ( (int)v3 < 1 )
    {
LABEL_8:
      LOBYTE(cateforyIdList) = 0;
    }
    else
    {
      v6 = 0LL;
      while ( 1 )
      {
        if ( v6 >= (unsigned int)v3 )
        {
          v7 = sub_B52A88(cateforyIdList);
          sub_B52A28(v7, 0LL);
        }
        if ( !sort )
          sub_B52A5C(cateforyIdList, sort);
        cateforyIdList = (System_Int32_array *)ListViewSort__GetSvtEquipEffectFilter(sort, v4->m_Items[v6 + 1], 0LL);
        if ( ((unsigned __int8)cateforyIdList & 1) != 0 )
          break;
        LODWORD(v3) = v4->max_length;
        if ( (__int64)++v6 >= (int)v3 )
          goto LABEL_8;
      }
      LOBYTE(cateforyIdList) = 1;
    }
  }
  return (char)cateforyIdList;
}


void __fastcall ServantEquipEffectFilterController__OnClick_Category(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B2EAB & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B2EAB = 1;
  }
  ActionExtensions__Call(*(System_Action_o **)&this->fields.categoryFlag, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
}


void __fastcall ServantEquipEffectFilterController__OnClick_ForceDeselectAll(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_int__int__o *defaultFilterData; // x0
  const MethodInfo *v5; // x1
  System_Collections_Generic_List_Enumerator_T__o v6; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B2EAD & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B2EAD = 1;
  }
  memset(&v6, 0, sizeof(v6));
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  defaultFilterData = this->fields.defaultFilterData;
  if ( !defaultFilterData )
    sub_B52A5C(0LL, v3);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v6,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)defaultFilterData,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v6,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v6.fields.current )
      sub_B52A5C(0LL, v5);
    ServantEquipEffectFilterContainer__ForceDeselectAll((ServantEquipEffectFilterContainer_o *)v6.fields.current, v5);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v6,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
  ActionExtensions__Call(*(System_Action_o **)&this->fields.categoryFlag, 0LL);
}


void __fastcall ServantEquipEffectFilterController__OnClick_ForceSelectAll(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_int__int__o *defaultFilterData; // x0
  const MethodInfo *v5; // x1
  System_Collections_Generic_List_Enumerator_T__o v6; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B2EAC & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B2EAC = 1;
  }
  memset(&v6, 0, sizeof(v6));
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  defaultFilterData = this->fields.defaultFilterData;
  if ( !defaultFilterData )
    sub_B52A5C(0LL, v3);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v6,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)defaultFilterData,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v6,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v6.fields.current )
      sub_B52A5C(0LL, v5);
    ServantEquipEffectFilterContainer__ForceSelectAll((ServantEquipEffectFilterContainer_o *)v6.fields.current, v5);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v6,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
  ActionExtensions__Call(*(System_Action_o **)&this->fields.categoryFlag, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterController__RefreshContainers(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  struct System_Collections_Generic_Dictionary_int__int__o **p_defaultFilterData; // x27
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  __int64 v11; // x1
  __int64 v12; // x20
  __int64 v13; // x20
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  ServantEquipEffectFilterController_c *klass; // x9
  UnityEngine_Object_o *v16; // x23
  UnityEngine_Object_o *v17; // x20
  struct UnityEngine_GameObject_o *buttonContainer; // x23
  _BOOL8 v19; // x0
  __int64 v20; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v24; // x1
  UnityEngine_Object_o *v25; // x24
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x25
  System_String_o *v29; // x26
  System_String_o *v30; // x0
  __int64 v31; // x1
  FunctionCategoryEntity_array *EntitiesByGroupType; // x24
  _BOOL8 v33; // x0
  __int64 v34; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **v38; // x20
  int32_t v39; // w25
  ListViewSort_o *containerList; // x26
  System_Action_o *v41; // x27
  const MethodInfo *v42; // x6
  __int64 v43; // x1
  UIWidget_o *v44; // x21
  float v45; // s1
  float v46; // s0
  double v47; // d0
  UnityEngine_GameObject_o *v48; // x0
  FunctionCategoryMaster_o *v49; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+30h] [xbp-90h] BYREF
  int32_t groupType; // [xsp+5Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B2EA9 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B52984(&Method_DataManager_GetMasterData_FunctionCategoryMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__get_Current__);
    sub_B52984(&FunctionCategoryEntity_GroupType_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterContainer___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_ServantEquipEffectFilterController_OnClick_Category__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B52984(&StringLiteral_4300/*"Container_"*/);
    byte_42B2EA9 = 1;
  }
  memset(&v51, 0, sizeof(v51));
  groupType = 0;
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int__o *)v3;
  p_defaultFilterData = &this->fields.defaultFilterData;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.defaultFilterData,
    (System_Int32_array **)v3,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v13 = **(_QWORD **)(v12 + 192);
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    sub_AEB684(v13);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v13 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_43;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_FunctionCategoryMaster___);
  klass = this[1].klass;
  v49 = (FunctionCategoryMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( !klass )
    goto LABEL_43;
  System_Collections_Generic_List_Voice_BATTLE___GetEnumerator(
    &v50,
    (System_Collections_Generic_List_Voice_BATTLE__o *)klass,
    (const MethodInfo_305ADCC *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__GetEnumerator__);
  v16 = 0LL;
  v51 = v50;
LABEL_10:
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_Voice_BATTLE___MoveNext(
            &v51,
            (const MethodInfo_200FCBC *)Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__MoveNext__) )
  {
    groupType = (int32_t)v51.fields.current;
    buttonContainer = this->fields.buttonContainer;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v16 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                    (UnityEngine_UI_Dropdown_DropdownItem_o *)buttonContainer,
                                    (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterContainer___);
    v19 = UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
    if ( v19 )
    {
      if ( !v16 )
        sub_B52A5C(v19, v20);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0LL);
      if ( !gameObject )
        sub_B52A5C(0LL, v22);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v16, 0LL);
      if ( !transform )
        sub_B52A5C(0LL, v24);
      UnityEngine_Transform__SetParent_35737932(
        transform,
        (UnityEngine_Transform_o *)this->fields.containerPrefab,
        0,
        0LL);
      v25 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0LL);
      v26 = j_il2cpp_value_box_0(FunctionCategoryEntity_GroupType_TypeInfo, &groupType);
      v28 = v26;
      if ( !v26 )
        sub_B52A5C(0LL, v27);
      v29 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v26 + 360LL))(
                                 v26,
                                 *(_QWORD *)(*(_QWORD *)v26 + 368LL));
      groupType = *(_DWORD *)j_il2cpp_object_unbox_0(v28);
      v30 = System_String__Concat_44568316((System_String_o *)StringLiteral_4300/*"Container_"*/, v29, 0LL);
      if ( !v25 )
        sub_B52A5C(v30, v30);
      UnityEngine_Object__set_name(v25, v30, 0LL);
      if ( !v49 )
        sub_B52A5C(0LL, v31);
      EntitiesByGroupType = FunctionCategoryMaster__GetEntitiesByGroupType(
                              v49,
                              groupType,
                              (int32_t)this->fields.displayGroups,
                              0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v33 = UnityEngine_Object__op_Equality(v17, 0LL, 0LL);
      if ( v33 )
      {
        zero = UnityEngine_Vector3__get_zero(0LL);
        x = zero.fields.x;
        y = zero.fields.y;
        z = zero.fields.z;
      }
      else
      {
        if ( !v17 )
          sub_B52A5C(v33, v34);
        x = *(float *)&v17[3].monitor;
        y = *((float *)&v17[3].monitor + 1);
        z = *(float *)&v17[3].fields.m_CachedPtr;
      }
      v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)p_defaultFilterData;
      v39 = groupType;
      containerList = (ListViewSort_o *)this->fields.containerList;
      v41 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v41, (Il2CppObject *)this, Method_ServantEquipEffectFilterController_OnClick_Category__, 0LL);
      v54.fields.x = x;
      v54.fields.y = y;
      v54.fields.z = z;
      ServantEquipEffectFilterContainer__Init(
        (ServantEquipEffectFilterContainer_o *)v16,
        EntitiesByGroupType,
        v39,
        containerList,
        v54,
        v41,
        (int32_t)this->fields.displayGroups,
        v42);
      if ( !*v38 )
        sub_B52A5C(0LL, v43);
      p_defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int__o **)v38;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        *v38,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__Add__);
      goto LABEL_10;
    }
  }
  System_Collections_Generic_List_Enumerator_Voice_BATTLE___Dispose(
    &v51,
    (const MethodInfo_200FCB8 *)Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__Dispose__);
  MasterData_WarQuestSelectionMaster = (DataManager_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)this,
                                                          (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.containerPrefab )
    goto LABEL_43;
  v44 = (UIWidget_o *)MasterData_WarQuestSelectionMaster;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)this->fields.containerPrefab,
                                                          0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_43;
  *(UnityEngine_Vector3_o *)(&v45 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)MasterData_WarQuestSelectionMaster,
                                           0LL);
  if ( !v17 || !v44 )
    goto LABEL_43;
  v46 = fabsf(v45 + *((float *)&v17[3].monitor + 1));
  v47 = v46 == INFINITY ? -v46 : v46;
  UIWidget__set_height(v44, LODWORD(this->fields.SvtEqDisplayGroups) + (int)v47, 0LL);
  MasterData_WarQuestSelectionMaster = (DataManager_o *)this->fields.containerHolder;
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)MasterData_WarQuestSelectionMaster,
                                                                0LL)) == 0LL
    || (UnityEngine_Transform__SetAsLastSibling((UnityEngine_Transform_o *)MasterData_WarQuestSelectionMaster, 0LL),
        (MasterData_WarQuestSelectionMaster = (DataManager_o *)this->fields.containerHolder) == 0LL)
    || (v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MasterData_WarQuestSelectionMaster, 0LL),
        GameObjectExtensions__SetLocalPosition(v48, *(UnityEngine_Vector3_o *)&v17[3].monitor, 0LL),
        (MasterData_WarQuestSelectionMaster = (DataManager_o *)this->fields.forceSelectAllButton) == 0LL) )
  {
LABEL_43:
    sub_B52A5C(MasterData_WarQuestSelectionMaster, v11);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_WarQuestSelectionMaster, 0, 0LL);
}


void __fastcall ServantEquipEffectFilterController__RefreshSelectState(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__int__o *defaultFilterData; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_T__o v5; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B2EA5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
    byte_42B2EA5 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  defaultFilterData = this->fields.defaultFilterData;
  if ( !defaultFilterData )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v5,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)defaultFilterData,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v5,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v5.fields.current )
      sub_B52A5C(0LL, v4);
    ServantEquipEffectFilterContainer__RefreshSelectState((ServantEquipEffectFilterContainer_o *)v5.fields.current, v4);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v5,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
}


void __fastcall ServantEquipEffectFilterController__SetDefaultFilterData(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v3; // x21
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  __int64 v10; // x1
  __int64 v11; // x21
  __int64 v12; // x21
  void *MasterData_WarQuestSelectionMaster; // x0
  int v14; // w8
  void *v15; // x21
  unsigned int v16; // w24
  __int64 v17; // x8
  int32_t v18; // w22
  struct System_Action_o *onClickEvent; // x23
  __int64 v20; // x0

  if ( (byte_42B2EA7 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_FunctionCategoryMaster___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_42B2EA7 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v3,
    (const MethodInfo_2EFEEF8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.onClickEvent = (struct System_Action_o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.onClickEvent,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v12 = **(_QWORD **)(v11 + 192);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_AEB684(v12);
  MasterData_WarQuestSelectionMaster = **(void ***)(v12 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_FunctionCategoryMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = FunctionCategoryMaster__GetEntitiesByFlag(
                                         (FunctionCategoryMaster_o *)MasterData_WarQuestSelectionMaster,
                                         (int32_t)this->fields.displayGroups,
                                         0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_18;
  v14 = *((_DWORD *)MasterData_WarQuestSelectionMaster + 6);
  v15 = MasterData_WarQuestSelectionMaster;
  if ( v14 >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= v14 )
      {
        v20 = sub_B52A88(MasterData_WarQuestSelectionMaster);
        sub_B52A28(v20, 0LL);
      }
      v17 = *((_QWORD *)v15 + (int)v16 + 4);
      if ( !v17 )
        break;
      MasterData_WarQuestSelectionMaster = this->fields.containerList;
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      v18 = *(_DWORD *)(v17 + 16);
      onClickEvent = this->fields.onClickEvent;
      MasterData_WarQuestSelectionMaster = (void *)ListViewSort__GetSvtEquipEffectFilterInt(
                                                     (ListViewSort_o *)MasterData_WarQuestSelectionMaster,
                                                     v18,
                                                     0LL);
      if ( !onClickEvent )
        break;
      System_Collections_Generic_Dictionary_int__int___Add(
        (System_Collections_Generic_Dictionary_int__int__o *)onClickEvent,
        v18,
        (int32_t)MasterData_WarQuestSelectionMaster,
        (const MethodInfo_2EFFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      v14 = *((_DWORD *)v15 + 6);
      if ( (int)++v16 >= v14 )
        return;
    }
LABEL_18:
    sub_B52A5C(MasterData_WarQuestSelectionMaster, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterController__SetEnableFilterButton(
        ServantEquipEffectFilterController_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *defaultFilterData; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  bool v8; // w20
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B2EAA & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
    byte_42B2EAA = 1;
  }
  memset(&v9, 0, sizeof(v9));
  defaultFilterData = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.defaultFilterData;
  if ( !defaultFilterData )
    goto LABEL_12;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    defaultFilterData,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v9,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v9.fields.current )
      sub_B52A5C(0LL, v6);
    ServantEquipEffectFilterContainer__SetEnableFilterButton(
      (ServantEquipEffectFilterContainer_o *)v9.fields.current,
      isEnable,
      v7);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
  defaultFilterData = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.forceDeselectAllButton;
  if ( !defaultFilterData
    || (v8 = isEnable,
        UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)defaultFilterData, v8, 0LL),
        (defaultFilterData = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.forceSelectAllButtonLabel) == 0LL) )
  {
LABEL_12:
    sub_B52A5C(defaultFilterData, isEnable);
  }
  UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)defaultFilterData, v8, 0LL);
}


void __fastcall ServantEquipEffectFilterController__SetupLabelObject(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  UILabel_o *lineSprite; // x20
  System_String_o **v4; // x8
  System_String_o *v5; // x21
  System_String_o *v6; // x0
  __int64 v7; // x1
  UILabel_o *forceDeselectAllButtonLabel; // x20
  UILabel_o *sort; // x19

  if ( (byte_42B2EA6 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_11771/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_DESELECT_ALL"*/);
    sub_B52984(&StringLiteral_11774/*"SERVANT_EQUIP_EFFECT_FILTER_TITLE"*/);
    sub_B52984(&StringLiteral_11772/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_SELECT_ALL"*/);
    sub_B52984(&StringLiteral_11769/*"SERVANT_EFFECT_FILTER_TITLE"*/);
    byte_42B2EA6 = 1;
  }
  lineSprite = (UILabel_o *)this->fields.lineSprite;
  if ( LODWORD(this->fields.displayGroups) == 4 )
    v4 = (System_String_o **)&StringLiteral_11769/*"SERVANT_EFFECT_FILTER_TITLE"*/;
  else
    v4 = (System_String_o **)&StringLiteral_11774/*"SERVANT_EQUIP_EFFECT_FILTER_TITLE"*/;
  v5 = *v4;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get(v5, 0LL);
  if ( !lineSprite
    || (UILabel__set_text(lineSprite, v6, 0LL),
        forceDeselectAllButtonLabel = this->fields.forceDeselectAllButtonLabel,
        v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11772/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_SELECT_ALL"*/, 0LL),
        !forceDeselectAllButtonLabel)
    || (UILabel__set_text(forceDeselectAllButtonLabel, v6, 0LL),
        sort = (UILabel_o *)this->fields.sort,
        v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11771/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_DESELECT_ALL"*/, 0LL),
        !sort) )
  {
    sub_B52A5C(v6, v7);
  }
  UILabel__set_text(sort, v6, 0LL);
}