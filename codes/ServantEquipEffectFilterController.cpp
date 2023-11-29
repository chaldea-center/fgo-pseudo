void __fastcall ServantEquipEffectFilterController___ctor(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_VoiceCondType_Type__o *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Collections_Generic_List_VoiceCondType_Type__o *v23; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Collections_Generic_List_VoiceCondType_Type__o *v34; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x20
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  System_Collections_Generic_Dictionary_int__int__o *v56; // x20
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7

  if ( (byte_40FD06C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo, v10);
    sub_B16FFC(&System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo, v11);
    byte_40FD06C = 1;
  }
  LODWORD(this->fields.SvtEqDisplayGroups) = 12;
  v12 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B170CC(
                                                                   System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo,
                                                                   method,
                                                                   v2,
                                                                   v3,
                                                                   v4);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v12,
    (const MethodInfo_2F1276C *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__);
  if ( !v12 )
    goto LABEL_7;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    1,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    2,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    3,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    4,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  this->fields.CommandCodeDisplayGroups = (struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *)v12;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.CommandCodeDisplayGroups,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v23 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B170CC(
                                                                   System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo,
                                                                   v19,
                                                                   v20,
                                                                   v21,
                                                                   v22);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v23,
    (const MethodInfo_2F1276C *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__);
  if ( !v23 )
    goto LABEL_7;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v23,
    1,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v23,
    2,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v23,
    3,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v23,
    8,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v23,
    5,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v23,
    6,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v23,
    7,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  this->fields.SvtDisplayGroups = (struct System_Collections_Generic_List_FunctionCategoryEntity_GroupType__o *)v23;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.SvtDisplayGroups,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v34 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B170CC(
                                                                   System_Collections_Generic_List_FunctionCategoryEntity_GroupType__TypeInfo,
                                                                   v30,
                                                                   v31,
                                                                   v32,
                                                                   v33);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v34,
    (const MethodInfo_2F1276C *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType___ctor__);
  if ( !v34 )
LABEL_7:
    sub_B170D4();
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v34,
    1,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v34,
    2,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v34,
    3,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v34,
    8,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v34,
    5,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v34,
    6,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v34,
    7,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__Add__);
  this->fields.titleLabel = (struct UILabel_o *)v34;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.titleLabel,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo,
                                                                                                  v41,
                                                                                                  v42,
                                                                                                  v43,
                                                                                                  v44);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v45,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int__o *)v45;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.defaultFilterData,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v56 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B170CC(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v52,
                                                               v53,
                                                               v54,
                                                               v55);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v56,
    (const MethodInfo_2DDC410 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.onClickEvent = (struct System_Action_o *)v56;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onClickEvent,
    (System_Int32_array **)v56,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.containerList,
    (System_Int32_array **)sort,
    *(System_String_array ***)&categoryFlag,
    (System_String_array **)onclickEvent,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  *(_QWORD *)&this->fields.categoryFlag = onclickEvent;
  sub_B16F98(
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
      sub_B16F98(
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
  ListViewSort_o *containerList; // x0
  int key_high; // x20^4
  char v11; // w19
  int v12; // w20
  __int128 v14[2]; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v15; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40FD066 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v7);
    byte_40FD066 = 1;
  }
  memset(&v15, 0, 32);
  onClickEvent = this->fields.onClickEvent;
  if ( !onClickEvent )
    sub_B170D4();
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v14,
    (System_Collections_Generic_Dictionary_int__int__o *)onClickEvent,
    (const MethodInfo_2DDD528 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v15.fields.dictionary = v14[0];
  v15.fields.current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v14[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v15,
            (const MethodInfo_272605C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    containerList = (ListViewSort_o *)this->fields.containerList;
    if ( !containerList )
      sub_B170D4();
    key_high = HIDWORD(v15.fields.current.fields.key);
    if ( ListViewSort__GetSvtEquipEffectFilterInt(containerList, (int32_t)v15.fields.current.fields.key, 0LL) != key_high )
    {
      v11 = 1;
      v12 = 16;
      goto LABEL_10;
    }
  }
  v11 = 0;
  v12 = 14;
LABEL_10:
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v15,
    (const MethodInfo_27261A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  return (v12 == 16) & v11;
}


bool __fastcall ServantEquipEffectFilterController__IsMatchEffectCategory(
        System_Int32_array *cateforyIdList,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v3; // x8
  System_Int32_array *v4; // x20
  unsigned __int64 v6; // x21

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
          sub_B17100(cateforyIdList, sort, method);
          sub_B170A0();
        }
        if ( !sort )
          sub_B170D4();
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
  if ( (byte_40FD069 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD069 = 1;
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
  struct System_Collections_Generic_Dictionary_int__int__o *defaultFilterData; // x0
  const MethodInfo *v8; // x1
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FD06B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    byte_40FD06B = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  defaultFilterData = this->fields.defaultFilterData;
  if ( !defaultFilterData )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)defaultFilterData,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v9,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v9.fields.current )
      sub_B170D4();
    ServantEquipEffectFilterContainer__ForceDeselectAll((ServantEquipEffectFilterContainer_o *)v9.fields.current, v8);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
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
  struct System_Collections_Generic_Dictionary_int__int__o *defaultFilterData; // x0
  const MethodInfo *v8; // x1
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FD06A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    byte_40FD06A = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  defaultFilterData = this->fields.defaultFilterData;
  if ( !defaultFilterData )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)defaultFilterData,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v9,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v9.fields.current )
      sub_B170D4();
    ServantEquipEffectFilterContainer__ForceSelectAll((ServantEquipEffectFilterContainer_o *)v9.fields.current, v8);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
  ActionExtensions__Call(*(System_Action_o **)&this->fields.categoryFlag, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterController__RefreshContainers(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x20
  struct System_Collections_Generic_Dictionary_int__int__o **p_defaultFilterData; // x27
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x20
  __int64 v30; // x20
  DataManager_o *v31; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantEquipEffectFilterController_c *klass; // x9
  UnityEngine_Component_o *v34; // x23
  UnityEngine_Component_o *v35; // x20
  struct UnityEngine_GameObject_o *buttonContainer; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *v39; // x24
  __int64 v40; // x0
  __int64 v41; // x25
  System_String_o *v42; // x26
  System_String_o *v43; // x1
  FunctionCategoryEntity_array *EntitiesByGroupType; // x24
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  float x; // s8
  float y; // s9
  float z; // s10
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **v52; // x20
  int32_t v53; // w25
  ListViewSort_o *containerList; // x26
  System_Action_o *v55; // x27
  const MethodInfo *v56; // x6
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v58; // x21
  UnityEngine_Transform_o *v59; // x0
  float v60; // s1
  float v61; // s0
  double v62; // d0
  UnityEngine_Component_o *containerHolder; // x0
  UnityEngine_Transform_o *v64; // x0
  UnityEngine_Component_o *v65; // x0
  UnityEngine_GameObject_o *v66; // x0
  UnityEngine_GameObject_o *forceSelectAllButton; // x0
  FunctionCategoryMaster_o *v68; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_T__o v69; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v70; // [xsp+30h] [xbp-90h] BYREF
  int32_t groupType; // [xsp+5Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FD067 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_FunctionCategoryMaster___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__get_Current__, v10);
    sub_B16FFC(&FunctionCategoryEntity_GroupType_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__GetEnumerator__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo, v15);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterContainer___, v16);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v17);
    sub_B16FFC(&Method_ServantEquipEffectFilterController_OnClick_Category__, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v19);
    sub_B16FFC(&StringLiteral_4244, v20);
    byte_40FD067 = 1;
  }
  memset(&v70, 0, sizeof(v70));
  groupType = 0;
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantEquipEffectFilterContainer__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer___ctor__);
  this->fields.defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int__o *)v21;
  p_defaultFilterData = &this->fields.defaultFilterData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.defaultFilterData,
    (System_Int32_array **)v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v29 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v30 = **(_QWORD **)(v29 + 192);
  if ( (*(_BYTE *)(v30 + 306) & 1) == 0 )
    sub_AAFCFC(v30);
  v31 = **(DataManager_o ***)(v30 + 184);
  if ( !v31 )
    goto LABEL_43;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         v31,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_FunctionCategoryMaster___);
  klass = this[1].klass;
  v68 = (FunctionCategoryMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( !klass )
    goto LABEL_43;
  System_Collections_Generic_List_Target_PlayerTypeFlag___GetEnumerator(
    &v69,
    (System_Collections_Generic_List_Target_PlayerTypeFlag__o *)klass,
    (const MethodInfo_2F1430C *)Method_System_Collections_Generic_List_FunctionCategoryEntity_GroupType__GetEnumerator__);
  v34 = 0LL;
  v70 = v69;
LABEL_10:
  v35 = v34;
  while ( System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag___MoveNext(
            &v70,
            (const MethodInfo_20723B4 *)Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__MoveNext__) )
  {
    groupType = (int32_t)v70.fields.current;
    buttonContainer = this->fields.buttonContainer;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v34 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       (UnityEngine_UI_Dropdown_DropdownItem_o *)buttonContainer,
                                       (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterContainer___);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v34, 0LL, 0LL) )
    {
      if ( !v34 )
        sub_B170D4();
      gameObject = UnityEngine_Component__get_gameObject(v34, 0LL);
      if ( !gameObject )
        sub_B170D4();
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      transform = UnityEngine_Component__get_transform(v34, 0LL);
      if ( !transform )
        sub_B170D4();
      UnityEngine_Transform__SetParent_34930292(
        transform,
        (UnityEngine_Transform_o *)this->fields.containerPrefab,
        0,
        0LL);
      v39 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v34, 0LL);
      v40 = j_il2cpp_value_box_0(FunctionCategoryEntity_GroupType_TypeInfo, &groupType);
      v41 = v40;
      if ( !v40 )
        sub_B170D4();
      v42 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v40 + 360LL))(
                                 v40,
                                 *(_QWORD *)(*(_QWORD *)v40 + 368LL));
      groupType = *(_DWORD *)j_il2cpp_object_unbox_0(v41);
      v43 = System_String__Concat_43743732((System_String_o *)StringLiteral_4244, v42, 0LL);
      if ( !v39 )
        sub_B170D4();
      UnityEngine_Object__set_name(v39, v43, 0LL);
      if ( !v68 )
        sub_B170D4();
      EntitiesByGroupType = FunctionCategoryMaster__GetEntitiesByGroupType(
                              v68,
                              groupType,
                              (int32_t)this->fields.displayGroups,
                              0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v35, 0LL, 0LL) )
      {
        zero = UnityEngine_Vector3__get_zero(0LL);
        x = zero.fields.x;
        y = zero.fields.y;
        z = zero.fields.z;
      }
      else
      {
        if ( !v35 )
          sub_B170D4();
        x = *(float *)&v35[3].monitor;
        y = *((float *)&v35[3].monitor + 1);
        z = *(float *)&v35[3].fields.m_CachedPtr;
      }
      v52 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)p_defaultFilterData;
      v53 = groupType;
      containerList = (ListViewSort_o *)this->fields.containerList;
      v55 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v45, v46, v47, v48);
      System_Action___ctor(v55, (Il2CppObject *)this, Method_ServantEquipEffectFilterController_OnClick_Category__, 0LL);
      v73.fields.x = x;
      v73.fields.y = y;
      v73.fields.z = z;
      ServantEquipEffectFilterContainer__Init(
        (ServantEquipEffectFilterContainer_o *)v34,
        EntitiesByGroupType,
        v53,
        containerList,
        v73,
        v55,
        (int32_t)this->fields.displayGroups,
        v56);
      if ( !*v52 )
        sub_B170D4();
      p_defaultFilterData = (struct System_Collections_Generic_Dictionary_int__int__o **)v52;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        *v52,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__Add__);
      goto LABEL_10;
    }
  }
  System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag___Dispose(
    &v70,
    (const MethodInfo_20723B0 *)Method_System_Collections_Generic_List_Enumerator_FunctionCategoryEntity_GroupType__Dispose__);
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.containerPrefab )
    goto LABEL_43;
  v58 = (UIWidget_o *)Component_WebViewObject;
  v59 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.containerPrefab, 0LL);
  if ( !v59 )
    goto LABEL_43;
  *(UnityEngine_Vector3_o *)(&v60 - 1) = UnityEngine_Transform__get_localPosition(v59, 0LL);
  if ( !v35 || !v58 )
    goto LABEL_43;
  v61 = fabsf(v60 + *((float *)&v35[3].monitor + 1));
  v62 = v61 == INFINITY ? -v61 : v61;
  UIWidget__set_height(v58, LODWORD(this->fields.SvtEqDisplayGroups) + (int)v62, 0LL);
  containerHolder = (UnityEngine_Component_o *)this->fields.containerHolder;
  if ( !containerHolder
    || (v64 = UnityEngine_Component__get_transform(containerHolder, 0LL)) == 0LL
    || (UnityEngine_Transform__SetAsLastSibling(v64, 0LL),
        (v65 = (UnityEngine_Component_o *)this->fields.containerHolder) == 0LL)
    || (v66 = UnityEngine_Component__get_gameObject(v65, 0LL),
        GameObjectExtensions__SetLocalPosition(v66, *(UnityEngine_Vector3_o *)&v35[3].monitor, 0LL),
        (forceSelectAllButton = (UnityEngine_GameObject_o *)this->fields.forceSelectAllButton) == 0LL) )
  {
LABEL_43:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(forceSelectAllButton, 0, 0LL);
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

  if ( (byte_40FD063 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__, v5);
    byte_40FD063 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  defaultFilterData = this->fields.defaultFilterData;
  if ( !defaultFilterData )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)defaultFilterData,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B170D4();
    ServantEquipEffectFilterContainer__RefreshSelectState((ServantEquipEffectFilterContainer_o *)v8.fields.current, v7);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
}


void __fastcall ServantEquipEffectFilterController__SetDefaultFilterData(
        ServantEquipEffectFilterController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_int__int__o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x21
  __int64 v18; // x21
  DataManager_o *v19; // x0
  FunctionCategoryMaster_o *MasterData_WarQuestSelectionMaster; // x0
  FunctionCategoryEntity_array *EntitiesByFlag; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  int max_length; // w8
  FunctionCategoryEntity_array *v25; // x21
  unsigned int v26; // w24
  FunctionCategoryEntity_o *v27; // x8
  ListViewSort_o *containerList; // x0
  int32_t id; // w22
  struct System_Action_o *onClickEvent; // x23
  int32_t SvtEquipEffectFilterInt; // w0

  if ( (byte_40FD065 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_FunctionCategoryMaster___, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v9);
    byte_40FD065 = 1;
  }
  v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B170CC(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               method,
                                                               v2,
                                                               v3,
                                                               v4);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v10,
    (const MethodInfo_2DDC410 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.onClickEvent = (struct System_Action_o *)v10;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onClickEvent,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v18 = **(_QWORD **)(v17 + 192);
  if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
    sub_AAFCFC(v18);
  v19 = **(DataManager_o ***)(v18 + 184);
  if ( !v19 )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = (FunctionCategoryMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     v19,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_FunctionCategoryMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_18;
  EntitiesByFlag = FunctionCategoryMaster__GetEntitiesByFlag(
                     MasterData_WarQuestSelectionMaster,
                     (int32_t)this->fields.displayGroups,
                     0LL);
  if ( !EntitiesByFlag )
    goto LABEL_18;
  max_length = EntitiesByFlag->max_length;
  v25 = EntitiesByFlag;
  if ( max_length >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      if ( v26 >= max_length )
      {
        sub_B17100(EntitiesByFlag, v22, v23);
        sub_B170A0();
      }
      v27 = v25->m_Items[v26];
      if ( !v27 )
        break;
      containerList = (ListViewSort_o *)this->fields.containerList;
      if ( !containerList )
        break;
      id = v27->fields.id;
      onClickEvent = this->fields.onClickEvent;
      SvtEquipEffectFilterInt = ListViewSort__GetSvtEquipEffectFilterInt(containerList, id, 0LL);
      if ( !onClickEvent )
        break;
      System_Collections_Generic_Dictionary_int__int___Add(
        (System_Collections_Generic_Dictionary_int__int__o *)onClickEvent,
        id,
        SvtEquipEffectFilterInt,
        (const MethodInfo_2DDCFB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      max_length = v25->max_length;
      if ( (int)++v26 >= max_length )
        return;
    }
LABEL_18:
    sub_B170D4();
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
  struct System_Collections_Generic_Dictionary_int__int__o *defaultFilterData; // x0
  const MethodInfo *v9; // x2
  UICommonButton_o *forceDeselectAllButton; // x0
  bool v11; // w20
  UICommonButton_o *forceSelectAllButtonLabel; // x0
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FD068 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__,
      isEnable);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__, v7);
    byte_40FD068 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  defaultFilterData = this->fields.defaultFilterData;
  if ( !defaultFilterData )
    goto LABEL_12;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)defaultFilterData,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterContainer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v13,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__MoveNext__) )
  {
    if ( !v13.fields.current )
      sub_B170D4();
    ServantEquipEffectFilterContainer__SetEnableFilterButton(
      (ServantEquipEffectFilterContainer_o *)v13.fields.current,
      isEnable,
      v9);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v13,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterContainer__Dispose__);
  forceDeselectAllButton = this->fields.forceDeselectAllButton;
  if ( !forceDeselectAllButton
    || (v11 = isEnable,
        UICommonButton__SetButtonEnableWithCollider(forceDeselectAllButton, v11, 0LL),
        (forceSelectAllButtonLabel = (UICommonButton_o *)this->fields.forceSelectAllButtonLabel) == 0LL) )
  {
LABEL_12:
    sub_B170D4();
  }
  UICommonButton__SetButtonEnableWithCollider(forceSelectAllButtonLabel, v11, 0LL);
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
  UILabel_o *forceDeselectAllButtonLabel; // x20
  System_String_o *v12; // x0
  UILabel_o *sort; // x19
  System_String_o *v14; // x0

  if ( (byte_40FD064 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_11647, v3);
    sub_B16FFC(&StringLiteral_11650, v4);
    sub_B16FFC(&StringLiteral_11648, v5);
    sub_B16FFC(&StringLiteral_11645, v6);
    byte_40FD064 = 1;
  }
  lineSprite = (UILabel_o *)this->fields.lineSprite;
  if ( LODWORD(this->fields.displayGroups) == 4 )
    v8 = (System_String_o **)&StringLiteral_11645;
  else
    v8 = (System_String_o **)&StringLiteral_11650;
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
        v12 = LocalizationManager__Get((System_String_o *)StringLiteral_11648, 0LL),
        !forceDeselectAllButtonLabel)
    || (UILabel__set_text(forceDeselectAllButtonLabel, v12, 0LL),
        sort = (UILabel_o *)this->fields.sort,
        v14 = LocalizationManager__Get((System_String_o *)StringLiteral_11647, 0LL),
        !sort) )
  {
    sub_B170D4();
  }
  UILabel__set_text(sort, v14, 0LL);
}