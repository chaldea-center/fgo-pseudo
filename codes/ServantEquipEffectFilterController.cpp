void __fastcall ServantEquipEffectFilterController___ctor(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_List_VoiceCondType_Type__o *v23; // x20
  __int64 v24; // x0
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v32; // x20
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v39; // x20
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x20
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Collections_Generic_Dictionary_int__int__o *v53; // x20
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7

  if ( (byte_42EB975 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo, v20, v21, v22);
    byte_42EB975 = 1;
  }
  LODWORD(this->fields.SvtEqDisplayGroups) = 12;
  v23 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v23,
    (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__);
  if ( !v23 )
    goto LABEL_7;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v23,
    1,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v23,
    2,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v23,
    3,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v23,
    4,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  this->fields.CommandCodeDisplayGroups = (struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *)v23;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.CommandCodeDisplayGroups,
    (System_Int32_array **)v23,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v32,
    (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__);
  if ( !v32 )
    goto LABEL_7;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v32,
    1,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v32,
    2,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v32,
    3,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v32,
    8,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v32,
    5,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v32,
    6,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v32,
    7,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  this->fields.SvtDisplayGroups = (struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *)v32;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.SvtDisplayGroups,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v39,
    (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__);
  if ( !v39 )
LABEL_7:
    sub_B5D69C(v24, v25);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v39,
    1,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v39,
    2,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v39,
    3,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v39,
    8,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v39,
    5,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v39,
    6,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v39,
    7,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  this->fields.titleLabel = (struct UILabel_o *)v39;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.titleLabel,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v46,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int__o *)v46;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.defaultFilterData,
    (System_Int32_array **)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v53 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v53,
    (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.onClickEvent = (struct System_Action_o *)v53;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onClickEvent,
    (System_Int32_array **)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.containerList,
    (System_Int32_array **)sort,
    *(System_String_array ***)&categoryFlag,
    (System_String_array **)onclickEvent,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  *(_QWORD *)&this->fields.categoryFlag = onclickEvent;
  sub_B5D560(
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
      sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct System_Action_o *onClickEvent; // x0
  __int64 v21; // x1
  ListViewSort_o *containerList; // x0
  int key_high; // x20^4
  char v24; // w19
  int v25; // w20
  __int128 v27[2]; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v28; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42EB96F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v17, v18, v19);
    byte_42EB96F = 1;
  }
  memset(&v28, 0, 32);
  onClickEvent = this->fields.onClickEvent;
  if ( !onClickEvent )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v27,
    (System_Collections_Generic_Dictionary_int__int__o *)onClickEvent,
    (const MethodInfo_2F0B3CC *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v28.fields.dictionary = v27[0];
  v28.fields.current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v27[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v28,
            (const MethodInfo_289F694 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    containerList = (ListViewSort_o *)this->fields.containerList;
    if ( !containerList )
      sub_B5D69C(0LL, v21);
    key_high = HIDWORD(v28.fields.current.fields.key);
    if ( ListViewSort__GetSvtEquipEffectFilterInt(containerList, (int32_t)v28.fields.current.fields.key, 0LL) != key_high )
    {
      v24 = 1;
      v25 = 16;
      goto LABEL_10;
    }
  }
  v24 = 0;
  v25 = 14;
LABEL_10:
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v28,
    (const MethodInfo_289F7DC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  return (v25 == 16) & v24;
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
          v7 = sub_B5D6C8(cateforyIdList);
          sub_B5D668(v7, 0LL);
        }
        if ( !sort )
          sub_B5D69C(cateforyIdList, sort);
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB972 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB972 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 v17; // x1
  struct System_Collections_Generic_Dictionary_int__int__o *defaultFilterData; // x0
  const MethodInfo *v19; // x1
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EB974 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    byte_42EB974 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  defaultFilterData = this->fields.defaultFilterData;
  if ( !defaultFilterData )
    sub_B5D69C(0LL, v17);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)defaultFilterData,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v20.fields.current )
      sub_B5D69C(0LL, v19);
    ServantEquipEffectFilterContainer__ForceDeselectAll((ServantEquipEffectFilterContainer_o *)v20.fields.current, v19);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
  ActionExtensions__Call(*(System_Action_o **)&this->fields.categoryFlag, 0LL);
}


void __fastcall ServantEquipEffectFilterController__OnClick_ForceSelectAll(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 v17; // x1
  struct System_Collections_Generic_Dictionary_int__int__o *defaultFilterData; // x0
  const MethodInfo *v19; // x1
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EB973 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    byte_42EB973 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  defaultFilterData = this->fields.defaultFilterData;
  if ( !defaultFilterData )
    sub_B5D69C(0LL, v17);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)defaultFilterData,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v20.fields.current )
      sub_B5D69C(0LL, v19);
    ServantEquipEffectFilterContainer__ForceSelectAll((ServantEquipEffectFilterContainer_o *)v20.fields.current, v19);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
  ActionExtensions__Call(*(System_Action_o **)&this->fields.categoryFlag, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterController__RefreshContainers(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v50; // x20
  struct System_Collections_Generic_Dictionary_int__int__o **p_defaultFilterData; // x27
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  __int64 v58; // x1
  __int64 v59; // x20
  __int64 v60; // x20
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  ServantEquipEffectFilterController_c *klass; // x9
  UnityEngine_Object_o *v63; // x23
  UnityEngine_Object_o *v64; // x20
  struct UnityEngine_GameObject_o *buttonContainer; // x23
  _BOOL8 v66; // x0
  __int64 v67; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v69; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v71; // x1
  UnityEngine_Object_o *v72; // x24
  __int64 v73; // x0
  __int64 v74; // x1
  __int64 v75; // x25
  System_String_o *v76; // x26
  System_String_o *v77; // x0
  __int64 v78; // x1
  FunctionCategoryEntity_array *EntitiesByGroupType; // x24
  _BOOL8 v80; // x0
  __int64 v81; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **v85; // x20
  int32_t v86; // w25
  ListViewSort_o *containerList; // x26
  System_Action_o *v88; // x27
  const MethodInfo *v89; // x6
  __int64 v90; // x1
  UIWidget_o *v91; // x21
  float v92; // s1
  float v93; // s0
  double v94; // d0
  UnityEngine_GameObject_o *v95; // x0
  FunctionCategoryMaster_o *v96; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_T__o v97; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v98; // [xsp+30h] [xbp-90h] BYREF
  int32_t groupType; // [xsp+5Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v101; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EB970 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_FunctionCategoryMaster___, v8, v9, v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__Dispose__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__MoveNext__,
      v14,
      v15,
      v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__get_Current__,
      v17,
      v18,
      v19);
    sub_B5D5C4(&FunctionCategoryEntity_GroupType_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__GetEnumerator__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterContainer___, v35, v36, v37);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_ServantEquipEffectFilterController_OnClick_Category__, v41, v42, v43);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_4333/*"Container_"*/, v47, v48, v49);
    byte_42EB970 = 1;
  }
  memset(&v98, 0, sizeof(v98));
  groupType = 0;
  v50 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v50,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int__o *)v50;
  p_defaultFilterData = &this->fields.defaultFilterData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.defaultFilterData,
    (System_Int32_array **)v50,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  v59 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v59 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v60 = **(_QWORD **)(v59 + 192);
  if ( (*(_BYTE *)(v60 + 306) & 1) == 0 )
    sub_AF52C4(v60);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v60 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_43;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_FunctionCategoryMaster___);
  klass = this[1].klass;
  v96 = (FunctionCategoryMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( !klass )
    goto LABEL_43;
  System_Collections_Generic_List_Voice_BATTLE___GetEnumerator(
    &v97,
    (System_Collections_Generic_List_Voice_BATTLE__o *)klass,
    (const MethodInfo_30455F4 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__GetEnumerator__);
  v63 = 0LL;
  v98 = v97;
LABEL_10:
  v64 = v63;
  while ( System_Collections_Generic_List_Enumerator_Voice_BATTLE___MoveNext(
            &v98,
            (const MethodInfo_201D330 *)Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__MoveNext__) )
  {
    groupType = (int32_t)v98.fields.current;
    buttonContainer = this->fields.buttonContainer;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v63 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                    (UnityEngine_UI_Dropdown_DropdownItem_o *)buttonContainer,
                                    (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterContainer___);
    v66 = UnityEngine_Object__op_Inequality(v63, 0LL, 0LL);
    if ( v66 )
    {
      if ( !v63 )
        sub_B5D69C(v66, v67);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v63, 0LL);
      if ( !gameObject )
        sub_B5D69C(0LL, v69);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v63, 0LL);
      if ( !transform )
        sub_B5D69C(0LL, v71);
      UnityEngine_Transform__SetParent_35741212(
        transform,
        (UnityEngine_Transform_o *)this->fields.containerPrefab,
        0,
        0LL);
      v72 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v63, 0LL);
      v73 = j_il2cpp_value_box_0(FunctionCategoryEntity_GroupType_TypeInfo, &groupType);
      v75 = v73;
      if ( !v73 )
        sub_B5D69C(0LL, v74);
      v76 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v73 + 360LL))(
                                 v73,
                                 *(_QWORD *)(*(_QWORD *)v73 + 368LL));
      groupType = *(_DWORD *)j_il2cpp_object_unbox_0(v75);
      v77 = System_String__Concat_44577788((System_String_o *)StringLiteral_4333/*"Container_"*/, v76, 0LL);
      if ( !v72 )
        sub_B5D69C(v77, v77);
      UnityEngine_Object__set_name(v72, v77, 0LL);
      if ( !v96 )
        sub_B5D69C(0LL, v78);
      EntitiesByGroupType = FunctionCategoryMaster__GetEntitiesByGroupType(
                              v96,
                              groupType,
                              (int32_t)this->fields.displayGroups,
                              0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v80 = UnityEngine_Object__op_Equality(v64, 0LL, 0LL);
      if ( v80 )
      {
        zero = UnityEngine_Vector3__get_zero(0LL);
        x = zero.fields.x;
        y = zero.fields.y;
        z = zero.fields.z;
      }
      else
      {
        if ( !v64 )
          sub_B5D69C(v80, v81);
        x = *(float *)&v64[3].monitor;
        y = *((float *)&v64[3].monitor + 1);
        z = *(float *)&v64[3].fields.m_CachedPtr;
      }
      v85 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)p_defaultFilterData;
      v86 = groupType;
      containerList = (ListViewSort_o *)this->fields.containerList;
      v88 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v88, (Il2CppObject *)this, Method_ServantEquipEffectFilterController_OnClick_Category__, 0LL);
      v101.fields.x = x;
      v101.fields.y = y;
      v101.fields.z = z;
      ServantEquipEffectFilterContainer__Init(
        (ServantEquipEffectFilterContainer_o *)v63,
        EntitiesByGroupType,
        v86,
        containerList,
        v101,
        v88,
        (int32_t)this->fields.displayGroups,
        v89);
      if ( !*v85 )
        sub_B5D69C(0LL, v90);
      p_defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int__o **)v85;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        *v85,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v63,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__Add__);
      goto LABEL_10;
    }
  }
  System_Collections_Generic_List_Enumerator_Voice_BATTLE___Dispose(
    &v98,
    (const MethodInfo_201D32C *)Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__Dispose__);
  MasterData_WarQuestSelectionMaster = (DataManager_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)this,
                                                          (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.containerPrefab )
    goto LABEL_43;
  v91 = (UIWidget_o *)MasterData_WarQuestSelectionMaster;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)this->fields.containerPrefab,
                                                          0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_43;
  *(UnityEngine_Vector3_o *)(&v92 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)MasterData_WarQuestSelectionMaster,
                                           0LL);
  if ( !v64 || !v91 )
    goto LABEL_43;
  v93 = fabsf(v92 + *((float *)&v64[3].monitor + 1));
  v94 = v93 == INFINITY ? -v93 : v93;
  UIWidget__set_height(v91, LODWORD(this->fields.SvtEqDisplayGroups) + (int)v94, 0LL);
  MasterData_WarQuestSelectionMaster = (DataManager_o *)this->fields.containerHolder;
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)MasterData_WarQuestSelectionMaster,
                                                                0LL)) == 0LL
    || (UnityEngine_Transform__SetAsLastSibling((UnityEngine_Transform_o *)MasterData_WarQuestSelectionMaster, 0LL),
        (MasterData_WarQuestSelectionMaster = (DataManager_o *)this->fields.containerHolder) == 0LL)
    || (v95 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MasterData_WarQuestSelectionMaster, 0LL),
        GameObjectExtensions__SetLocalPosition(v95, *(UnityEngine_Vector3_o *)&v64[3].monitor, 0LL),
        (MasterData_WarQuestSelectionMaster = (DataManager_o *)this->fields.forceSelectAllButton) == 0LL) )
  {
LABEL_43:
    sub_B5D69C(MasterData_WarQuestSelectionMaster, v58);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_WarQuestSelectionMaster, 0, 0LL);
}


void __fastcall ServantEquipEffectFilterController__RefreshSelectState(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_Dictionary_int__int__o *defaultFilterData; // x0
  const MethodInfo *v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EB96C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__,
      v11,
      v12,
      v13);
    byte_42EB96C = 1;
  }
  memset(&v16, 0, sizeof(v16));
  defaultFilterData = this->fields.defaultFilterData;
  if ( !defaultFilterData )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)defaultFilterData,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v16.fields.current )
      sub_B5D69C(0LL, v15);
    ServantEquipEffectFilterContainer__RefreshSelectState(
      (ServantEquipEffectFilterContainer_o *)v16.fields.current,
      v15);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
}


void __fastcall ServantEquipEffectFilterController__SetDefaultFilterData(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_Dictionary_int__int__o *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x21
  __int64 v26; // x21
  void *MasterData_WarQuestSelectionMaster; // x0
  int v28; // w8
  void *v29; // x21
  unsigned int v30; // w24
  __int64 v31; // x8
  int32_t v32; // w22
  struct System_Action_o *onClickEvent; // x23
  __int64 v34; // x0

  if ( (byte_42EB96E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_FunctionCategoryMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v14, v15, v16);
    byte_42EB96E = 1;
  }
  v17 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v17,
    (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.onClickEvent = (struct System_Action_o *)v17;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onClickEvent,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v25 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v25 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v26 = **(_QWORD **)(v25 + 192);
  if ( (*(_BYTE *)(v26 + 306) & 1) == 0 )
    sub_AF52C4(v26);
  MasterData_WarQuestSelectionMaster = **(void ***)(v26 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_FunctionCategoryMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = FunctionCategoryMaster__GetEntitiesByFlag(
                                         (FunctionCategoryMaster_o *)MasterData_WarQuestSelectionMaster,
                                         (int32_t)this->fields.displayGroups,
                                         0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_18;
  v28 = *((_DWORD *)MasterData_WarQuestSelectionMaster + 6);
  v29 = MasterData_WarQuestSelectionMaster;
  if ( v28 >= 1 )
  {
    v30 = 0;
    while ( 1 )
    {
      if ( v30 >= v28 )
      {
        v34 = sub_B5D6C8(MasterData_WarQuestSelectionMaster);
        sub_B5D668(v34, 0LL);
      }
      v31 = *((_QWORD *)v29 + (int)v30 + 4);
      if ( !v31 )
        break;
      MasterData_WarQuestSelectionMaster = this->fields.containerList;
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      v32 = *(_DWORD *)(v31 + 16);
      onClickEvent = this->fields.onClickEvent;
      MasterData_WarQuestSelectionMaster = (void *)ListViewSort__GetSvtEquipEffectFilterInt(
                                                     (ListViewSort_o *)MasterData_WarQuestSelectionMaster,
                                                     v32,
                                                     0LL);
      if ( !onClickEvent )
        break;
      System_Collections_Generic_Dictionary_int__int___Add(
        (System_Collections_Generic_Dictionary_int__int__o *)onClickEvent,
        v32,
        (int32_t)MasterData_WarQuestSelectionMaster,
        (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      v28 = *((_DWORD *)v29 + 6);
      if ( (int)++v30 >= v28 )
        return;
    }
LABEL_18:
    sub_B5D69C(MasterData_WarQuestSelectionMaster, v24);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterController__SetEnableFilterButton(
        ServantEquipEffectFilterController_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *defaultFilterData; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  bool v18; // w20
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EB971 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__,
      isEnable,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__,
      v12,
      v13,
      v14);
    byte_42EB971 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  defaultFilterData = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.defaultFilterData;
  if ( !defaultFilterData )
    goto LABEL_12;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    defaultFilterData,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v19.fields.current )
      sub_B5D69C(0LL, v16);
    ServantEquipEffectFilterContainer__SetEnableFilterButton(
      (ServantEquipEffectFilterContainer_o *)v19.fields.current,
      isEnable,
      v17);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
  defaultFilterData = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.forceDeselectAllButton;
  if ( !defaultFilterData
    || (v18 = isEnable,
        UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)defaultFilterData, v18, 0LL),
        (defaultFilterData = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.forceSelectAllButtonLabel) == 0LL) )
  {
LABEL_12:
    sub_B5D69C(defaultFilterData, isEnable);
  }
  UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)defaultFilterData, v18, 0LL);
}


void __fastcall ServantEquipEffectFilterController__SetupLabelObject(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UILabel_o *lineSprite; // x20
  System_String_o **v18; // x8
  System_String_o *v19; // x21
  System_String_o *v20; // x0
  __int64 v21; // x1
  UILabel_o *forceDeselectAllButtonLabel; // x20
  UILabel_o *sort; // x19

  if ( (byte_42EB96D & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_11825/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_DESELECT_ALL"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_11828/*"SERVANT_EQUIP_EFFECT_FILTER_TITLE"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_11826/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_SELECT_ALL"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_11823/*"SERVANT_EFFECT_FILTER_TITLE"*/, v14, v15, v16);
    byte_42EB96D = 1;
  }
  lineSprite = (UILabel_o *)this->fields.lineSprite;
  if ( LODWORD(this->fields.displayGroups) == 4 )
    v18 = (System_String_o **)&StringLiteral_11823/*"SERVANT_EFFECT_FILTER_TITLE"*/;
  else
    v18 = (System_String_o **)&StringLiteral_11828/*"SERVANT_EQUIP_EFFECT_FILTER_TITLE"*/;
  v19 = *v18;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v20 = LocalizationManager__Get(v19, 0LL);
  if ( !lineSprite
    || (UILabel__set_text(lineSprite, v20, 0LL),
        forceDeselectAllButtonLabel = this->fields.forceDeselectAllButtonLabel,
        v20 = LocalizationManager__Get((System_String_o *)StringLiteral_11826/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_SELECT_ALL"*/, 0LL),
        !forceDeselectAllButtonLabel)
    || (UILabel__set_text(forceDeselectAllButtonLabel, v20, 0LL),
        sort = (UILabel_o *)this->fields.sort,
        v20 = LocalizationManager__Get((System_String_o *)StringLiteral_11825/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_DESELECT_ALL"*/, 0LL),
        !sort) )
  {
    sub_B5D69C(v20, v21);
  }
  UILabel__set_text(sort, v20, 0LL);
}