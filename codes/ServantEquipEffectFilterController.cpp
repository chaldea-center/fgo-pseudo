void __fastcall ServantEquipEffectFilterController___ctor(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_VoiceCondType_Type__o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x20
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Collections_Generic_Dictionary_int__int__o *v39; // x20
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7

  if ( (byte_418AB2E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo, v8);
    byte_418AB2E = 1;
  }
  LODWORD(this->fields.SvtEqDisplayGroups) = 12;
  v9 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B2C42C(System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v9,
    (const MethodInfo_2F69274 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__);
  if ( !v9 )
    goto LABEL_7;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v9,
    1,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v9,
    2,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v9,
    3,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v9,
    4,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  this->fields.CommandCodeDisplayGroups = (struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *)v9;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.CommandCodeDisplayGroups,
    (System_Int32_array **)v9,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B2C42C(System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v18,
    (const MethodInfo_2F69274 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__);
  if ( !v18 )
    goto LABEL_7;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v18,
    1,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v18,
    2,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v18,
    3,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v18,
    8,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v18,
    5,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v18,
    6,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v18,
    7,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  this->fields.SvtDisplayGroups = (struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *)v18;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.SvtDisplayGroups,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B2C42C(System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v25,
    (const MethodInfo_2F69274 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__);
  if ( !v25 )
LABEL_7:
    sub_B2C434(v10, v11);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v25,
    1,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v25,
    2,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v25,
    3,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v25,
    8,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v25,
    5,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v25,
    6,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v25,
    7,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  this->fields.titleLabel = (struct UILabel_o *)v25;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.titleLabel,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v32,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int__o *)v32;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.defaultFilterData,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v39,
    (const MethodInfo_2E2399C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.onClickEvent = (struct System_Action_o *)v39;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onClickEvent,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.containerList,
    (System_Int32_array **)sort,
    *(System_String_array ***)&categoryFlag,
    (System_String_array **)onclickEvent,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  *(_QWORD *)&this->fields.categoryFlag = onclickEvent;
  sub_B2C2F8(
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
      sub_B2C2F8(
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Action_o *onClickEvent; // x0
  __int64 v9; // x1
  ListViewSort_o *containerList; // x0
  int key_high; // x20^4
  char v12; // w19
  int v13; // w20
  __int128 v15[2]; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v16; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_418AB28 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v7);
    byte_418AB28 = 1;
  }
  memset(&v16, 0, 32);
  onClickEvent = this->fields.onClickEvent;
  if ( !onClickEvent )
    sub_B2C434(0LL, method);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v15,
    (System_Collections_Generic_Dictionary_int__int__o *)onClickEvent,
    (const MethodInfo_2E24AB4 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v16.fields.dictionary = v15[0];
  v16.fields.current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v15[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v16,
            (const MethodInfo_256852C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    containerList = (ListViewSort_o *)this->fields.containerList;
    if ( !containerList )
      sub_B2C434(0LL, v9);
    key_high = HIDWORD(v16.fields.current.fields.key);
    if ( ListViewSort__GetSvtEquipEffectFilterInt(containerList, (int32_t)v16.fields.current.fields.key, 0LL) != key_high )
    {
      v12 = 1;
      v13 = 16;
      goto LABEL_10;
    }
  }
  v12 = 0;
  v13 = 14;
LABEL_10:
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v16,
    (const MethodInfo_2568674 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  return (v13 == 16) & v12;
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
          v7 = sub_B2C460(cateforyIdList);
          sub_B2C400(v7, 0LL);
        }
        if ( !sort )
          sub_B2C434(cateforyIdList, sort);
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
  if ( (byte_418AB2B & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418AB2B = 1;
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_int__int__o *defaultFilterData; // x0
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418AB2D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    byte_418AB2D = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  defaultFilterData = this->fields.defaultFilterData;
  if ( !defaultFilterData )
    sub_B2C434(0LL, v7);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)defaultFilterData,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v10,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v10.fields.current )
      sub_B2C434(0LL, v9);
    ServantEquipEffectFilterContainer__ForceDeselectAll((ServantEquipEffectFilterContainer_o *)v10.fields.current, v9);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
  ActionExtensions__Call(*(System_Action_o **)&this->fields.categoryFlag, 0LL);
}


void __fastcall ServantEquipEffectFilterController__OnClick_ForceSelectAll(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_int__int__o *defaultFilterData; // x0
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418AB2C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    byte_418AB2C = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  defaultFilterData = this->fields.defaultFilterData;
  if ( !defaultFilterData )
    sub_B2C434(0LL, v7);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)defaultFilterData,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v10,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v10.fields.current )
      sub_B2C434(0LL, v9);
    ServantEquipEffectFilterContainer__ForceSelectAll((ServantEquipEffectFilterContainer_o *)v10.fields.current, v9);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
  ActionExtensions__Call(*(System_Action_o **)&this->fields.categoryFlag, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterController__RefreshContainers(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x20
  struct System_Collections_Generic_Dictionary_int__int__o **p_defaultFilterData; // x27
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x20
  __int64 v28; // x20
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  ServantEquipEffectFilterController_c *klass; // x9
  UnityEngine_Object_o *v31; // x23
  UnityEngine_Object_o *v32; // x20
  struct UnityEngine_GameObject_o *buttonContainer; // x23
  _BOOL8 v34; // x0
  __int64 v35; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v37; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v39; // x1
  UnityEngine_Object_o *v40; // x24
  __int64 v41; // x0
  __int64 v42; // x1
  __int64 v43; // x25
  System_String_o *v44; // x26
  System_String_o *v45; // x0
  __int64 v46; // x1
  FunctionCategoryEntity_array *EntitiesByGroupType; // x24
  _BOOL8 v48; // x0
  __int64 v49; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **v53; // x20
  int32_t v54; // w25
  ListViewSort_o *containerList; // x26
  System_Action_o *v56; // x27
  const MethodInfo *v57; // x6
  __int64 v58; // x1
  UIWidget_o *v59; // x21
  float v60; // s1
  float v61; // s0
  double v62; // d0
  UnityEngine_GameObject_o *v63; // x0
  FunctionCategoryMaster_o *v64; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_T__o v65; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v66; // [xsp+30h] [xbp-90h] BYREF
  int32_t groupType; // [xsp+5Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418AB29 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_FunctionCategoryMaster___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__get_Current__, v7);
    sub_B2C35C(&FunctionCategoryEntity_GroupType_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo, v12);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterContainer___, v13);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v14);
    sub_B2C35C(&Method_ServantEquipEffectFilterController_OnClick_Category__, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v16);
    sub_B2C35C(&StringLiteral_4262/*"Container_"*/, v17);
    byte_418AB29 = 1;
  }
  memset(&v66, 0, sizeof(v66));
  groupType = 0;
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int__o *)v18;
  p_defaultFilterData = &this->fields.defaultFilterData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.defaultFilterData,
    (System_Int32_array **)v18,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v27 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v27 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v28 = **(_QWORD **)(v27 + 192);
  if ( (*(_BYTE *)(v28 + 306) & 1) == 0 )
    sub_AC505C(v28);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v28 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_43;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_FunctionCategoryMaster___);
  klass = this[1].klass;
  v64 = (FunctionCategoryMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( !klass )
    goto LABEL_43;
  System_Collections_Generic_List_Target_PlayerTypeFlag___GetEnumerator(
    &v65,
    (System_Collections_Generic_List_Target_PlayerTypeFlag__o *)klass,
    (const MethodInfo_2F6AE14 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__GetEnumerator__);
  v31 = 0LL;
  v66 = v65;
LABEL_10:
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag___MoveNext(
            &v66,
            (const MethodInfo_20E878C *)Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__MoveNext__) )
  {
    groupType = (int32_t)v66.fields.current;
    buttonContainer = this->fields.buttonContainer;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v31 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                    (UnityEngine_UI_Dropdown_DropdownItem_o *)buttonContainer,
                                    (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterContainer___);
    v34 = UnityEngine_Object__op_Inequality(v31, 0LL, 0LL);
    if ( v34 )
    {
      if ( !v31 )
        sub_B2C434(v34, v35);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v31, 0LL);
      if ( !gameObject )
        sub_B2C434(0LL, v37);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v31, 0LL);
      if ( !transform )
        sub_B2C434(0LL, v39);
      UnityEngine_Transform__SetParent_35435768(
        transform,
        (UnityEngine_Transform_o *)this->fields.containerPrefab,
        0,
        0LL);
      v40 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v31, 0LL);
      v41 = j_il2cpp_value_box_0(FunctionCategoryEntity_GroupType_TypeInfo, &groupType);
      v43 = v41;
      if ( !v41 )
        sub_B2C434(0LL, v42);
      v44 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v41 + 360LL))(
                                 v41,
                                 *(_QWORD *)(*(_QWORD *)v41 + 368LL));
      groupType = *(_DWORD *)j_il2cpp_object_unbox_0(v43);
      v45 = System_String__Concat_44305532((System_String_o *)StringLiteral_4262/*"Container_"*/, v44, 0LL);
      if ( !v40 )
        sub_B2C434(v45, v45);
      UnityEngine_Object__set_name(v40, v45, 0LL);
      if ( !v64 )
        sub_B2C434(0LL, v46);
      EntitiesByGroupType = FunctionCategoryMaster__GetEntitiesByGroupType(
                              v64,
                              groupType,
                              (int32_t)this->fields.displayGroups,
                              0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v48 = UnityEngine_Object__op_Equality(v32, 0LL, 0LL);
      if ( v48 )
      {
        zero = UnityEngine_Vector3__get_zero(0LL);
        x = zero.fields.x;
        y = zero.fields.y;
        z = zero.fields.z;
      }
      else
      {
        if ( !v32 )
          sub_B2C434(v48, v49);
        x = *(float *)&v32[3].monitor;
        y = *((float *)&v32[3].monitor + 1);
        z = *(float *)&v32[3].fields.m_CachedPtr;
      }
      v53 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)p_defaultFilterData;
      v54 = groupType;
      containerList = (ListViewSort_o *)this->fields.containerList;
      v56 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v56, (Il2CppObject *)this, Method_ServantEquipEffectFilterController_OnClick_Category__, 0LL);
      v69.fields.x = x;
      v69.fields.y = y;
      v69.fields.z = z;
      ServantEquipEffectFilterContainer__Init(
        (ServantEquipEffectFilterContainer_o *)v31,
        EntitiesByGroupType,
        v54,
        containerList,
        v69,
        v56,
        (int32_t)this->fields.displayGroups,
        v57);
      if ( !*v53 )
        sub_B2C434(0LL, v58);
      p_defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int__o **)v53;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        *v53,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__Add__);
      goto LABEL_10;
    }
  }
  System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag___Dispose(
    &v66,
    (const MethodInfo_20E8788 *)Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__Dispose__);
  MasterData_WarQuestSelectionMaster = (DataManager_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)this,
                                                          (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.containerPrefab )
    goto LABEL_43;
  v59 = (UIWidget_o *)MasterData_WarQuestSelectionMaster;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)this->fields.containerPrefab,
                                                          0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_43;
  *(UnityEngine_Vector3_o *)(&v60 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)MasterData_WarQuestSelectionMaster,
                                           0LL);
  if ( !v32 || !v59 )
    goto LABEL_43;
  v61 = fabsf(v60 + *((float *)&v32[3].monitor + 1));
  v62 = v61 == INFINITY ? -v61 : v61;
  UIWidget__set_height(v59, LODWORD(this->fields.SvtEqDisplayGroups) + (int)v62, 0LL);
  MasterData_WarQuestSelectionMaster = (DataManager_o *)this->fields.containerHolder;
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)MasterData_WarQuestSelectionMaster,
                                                                0LL)) == 0LL
    || (UnityEngine_Transform__SetAsLastSibling((UnityEngine_Transform_o *)MasterData_WarQuestSelectionMaster, 0LL),
        (MasterData_WarQuestSelectionMaster = (DataManager_o *)this->fields.containerHolder) == 0LL)
    || (v63 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MasterData_WarQuestSelectionMaster, 0LL),
        GameObjectExtensions__SetLocalPosition(v63, *(UnityEngine_Vector3_o *)&v32[3].monitor, 0LL),
        (MasterData_WarQuestSelectionMaster = (DataManager_o *)this->fields.forceSelectAllButton) == 0LL) )
  {
LABEL_43:
    sub_B2C434(MasterData_WarQuestSelectionMaster, v26);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_WarQuestSelectionMaster, 0, 0LL);
}


void __fastcall ServantEquipEffectFilterController__RefreshSelectState(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_int__int__o *defaultFilterData; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418AB25 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__, v5);
    byte_418AB25 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  defaultFilterData = this->fields.defaultFilterData;
  if ( !defaultFilterData )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)defaultFilterData,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B2C434(0LL, v7);
    ServantEquipEffectFilterContainer__RefreshSelectState((ServantEquipEffectFilterContainer_o *)v8.fields.current, v7);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
}


void __fastcall ServantEquipEffectFilterController__SetDefaultFilterData(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_int__int__o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x21
  __int64 v16; // x21
  void *MasterData_WarQuestSelectionMaster; // x0
  int v18; // w8
  void *v19; // x21
  unsigned int v20; // w24
  __int64 v21; // x8
  int32_t v22; // w22
  struct System_Action_o *onClickEvent; // x23
  __int64 v24; // x0

  if ( (byte_418AB27 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_FunctionCategoryMaster___, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    byte_418AB27 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v7,
    (const MethodInfo_2E2399C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.onClickEvent = (struct System_Action_o *)v7;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onClickEvent,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v15 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v16 = **(_QWORD **)(v15 + 192);
  if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
    sub_AC505C(v16);
  MasterData_WarQuestSelectionMaster = **(void ***)(v16 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_FunctionCategoryMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = FunctionCategoryMaster__GetEntitiesByFlag(
                                         (FunctionCategoryMaster_o *)MasterData_WarQuestSelectionMaster,
                                         (int32_t)this->fields.displayGroups,
                                         0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_18;
  v18 = *((_DWORD *)MasterData_WarQuestSelectionMaster + 6);
  v19 = MasterData_WarQuestSelectionMaster;
  if ( v18 >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= v18 )
      {
        v24 = sub_B2C460(MasterData_WarQuestSelectionMaster);
        sub_B2C400(v24, 0LL);
      }
      v21 = *((_QWORD *)v19 + (int)v20 + 4);
      if ( !v21 )
        break;
      MasterData_WarQuestSelectionMaster = this->fields.containerList;
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      v22 = *(_DWORD *)(v21 + 16);
      onClickEvent = this->fields.onClickEvent;
      MasterData_WarQuestSelectionMaster = (void *)ListViewSort__GetSvtEquipEffectFilterInt(
                                                     (ListViewSort_o *)MasterData_WarQuestSelectionMaster,
                                                     v22,
                                                     0LL);
      if ( !onClickEvent )
        break;
      System_Collections_Generic_Dictionary_int__int___Add(
        (System_Collections_Generic_Dictionary_int__int__o *)onClickEvent,
        v22,
        (int32_t)MasterData_WarQuestSelectionMaster,
        (const MethodInfo_2E24540 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      v18 = *((_DWORD *)v19 + 6);
      if ( (int)++v20 >= v18 )
        return;
    }
LABEL_18:
    sub_B2C434(MasterData_WarQuestSelectionMaster, v14);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterController__SetEnableFilterButton(
        ServantEquipEffectFilterController_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *defaultFilterData; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  bool v11; // w20
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418AB2A & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__,
      isEnable);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__, v7);
    byte_418AB2A = 1;
  }
  memset(&v12, 0, sizeof(v12));
  defaultFilterData = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.defaultFilterData;
  if ( !defaultFilterData )
    goto LABEL_12;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    defaultFilterData,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v12.fields.current )
      sub_B2C434(0LL, v9);
    ServantEquipEffectFilterContainer__SetEnableFilterButton(
      (ServantEquipEffectFilterContainer_o *)v12.fields.current,
      isEnable,
      v10);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
  defaultFilterData = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.forceDeselectAllButton;
  if ( !defaultFilterData
    || (v11 = isEnable,
        UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)defaultFilterData, v11, 0LL),
        (defaultFilterData = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.forceSelectAllButtonLabel) == 0LL) )
  {
LABEL_12:
    sub_B2C434(defaultFilterData, isEnable);
  }
  UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)defaultFilterData, v11, 0LL);
}


void __fastcall ServantEquipEffectFilterController__SetupLabelObject(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UILabel_o *lineSprite; // x20
  System_String_o **v8; // x8
  System_String_o *v9; // x21
  System_String_o *v10; // x0
  __int64 v11; // x1
  UILabel_o *forceDeselectAllButtonLabel; // x20
  UILabel_o *sort; // x19

  if ( (byte_418AB26 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_11686/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_DESELECT_ALL"*/, v3);
    sub_B2C35C(&StringLiteral_11689/*"SERVANT_EQUIP_EFFECT_FILTER_TITLE"*/, v4);
    sub_B2C35C(&StringLiteral_11687/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_SELECT_ALL"*/, v5);
    sub_B2C35C(&StringLiteral_11684/*"SERVANT_EFFECT_FILTER_TITLE"*/, v6);
    byte_418AB26 = 1;
  }
  lineSprite = (UILabel_o *)this->fields.lineSprite;
  if ( LODWORD(this->fields.displayGroups) == 4 )
    v8 = (System_String_o **)&StringLiteral_11684/*"SERVANT_EFFECT_FILTER_TITLE"*/;
  else
    v8 = (System_String_o **)&StringLiteral_11689/*"SERVANT_EQUIP_EFFECT_FILTER_TITLE"*/;
  v9 = *v8;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get(v9, 0LL);
  if ( !lineSprite
    || (UILabel__set_text(lineSprite, v10, 0LL),
        forceDeselectAllButtonLabel = this->fields.forceDeselectAllButtonLabel,
        v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11687/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_SELECT_ALL"*/, 0LL),
        !forceDeselectAllButtonLabel)
    || (UILabel__set_text(forceDeselectAllButtonLabel, v10, 0LL),
        sort = (UILabel_o *)this->fields.sort,
        v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11686/*"SERVANT_EQUIP_EFFECT_FILTER_BUTTON_DESELECT_ALL"*/, 0LL),
        !sort) )
  {
    sub_B2C434(v10, v11);
  }
  UILabel__set_text(sort, v10, 0LL);
}