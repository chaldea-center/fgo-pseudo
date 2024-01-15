void __fastcall MaterialEventLogListViewItem___ctor(MaterialEventLogListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
}


void __fastcall MaterialEventLogListViewItem___ctor_30145160(
        MaterialEventLogListViewItem_o *this,
        int32_t index,
        int32_t kind,
        MaterialEventLogListViewItem_Info_o *info,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  v7 = (BattleServantConfConponent_o *)this;
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  v7->fields.unknownNp = (struct UILabel_o *)info;
  v7 = (BattleServantConfConponent_o *)((char *)v7 + 120);
  *(_DWORD *)&v7[-1].fields.isOpenAfter = kind;
  sub_B16F98(v7, (System_Int32_array **)info, v8, v9, v10, v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MaterialEventLogListViewItem__CheckPlayableMaterial(
        MaterialEventLogListViewItem_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x21
  System_String_o *v9; // x0
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct MaterialEventLogListViewItem_Info_o *v13; // x8
  VoiceMaterialCondMaster_o *v14; // x20
  int32_t svtVoiceId; // w22
  int32_t voicePrefix; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v17; // x23
  System_String_o *v18; // x0

  if ( (byte_40FCC15 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_VoiceMaterialCondMaster___, *(_QWORD *)&limitCount);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FCC15 = 1;
  }
  info_k__BackingField = this->fields._info_k__BackingField;
  if ( !info_k__BackingField )
    goto LABEL_16;
  voiceId = info_k__BackingField->fields.voiceId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44107000(voiceId, 0LL);
  if ( System_String__IsNullOrEmpty(v9, 0LL) )
    return 1;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_VoiceMaterialCondMaster___);
  v13 = this->fields._info_k__BackingField;
  if ( !v13 )
    goto LABEL_16;
  v14 = (VoiceMaterialCondMaster_o *)MasterData_WarQuestSelectionMaster;
  svtVoiceId = v13->fields.svtVoiceId;
  voicePrefix = v13->fields.voicePrefix;
  v17 = v13->fields.voiceId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44107000(v17, 0LL);
  if ( !v14 )
LABEL_16:
    sub_B170D4();
  return VoiceMaterialCondMaster__IsVoicePlay(v14, svtVoiceId, voicePrefix, v18, limitCount, 0LL);
}


bool __fastcall MaterialEventLogListViewItem__IsItemMatchFilter(
        MaterialEventLogListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  return ((__int64 (__fastcall *)(MaterialEventLogListViewItem_o *, ListViewSort_o *, void *))this->klass->vtable._5_IsMatchFilter.method)(
           this,
           sort,
           this->klass[1]._1.image);
}


bool __fastcall MaterialEventLogListViewItem__IsMatchFilter(
        MaterialEventLogListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x8

  info_k__BackingField = this->fields._info_k__BackingField;
  return !info_k__BackingField
      || !info_k__BackingField->fields.svt_id
      || MaterialEventLogListViewItem__IsMatchServantFilter(this, sort, method);
}


bool __fastcall MaterialEventLogListViewItem__IsMatchServantFilter(
        MaterialEventLogListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  FilterKindList_c *v6; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassGroupFilterKindList; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassFilterKindList; // x0
  ListViewSort_FilterKind_array *v11; // x0
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x8
  struct MaterialEventLogListViewItem_Info_o *v13; // x8
  FilterKindList_c *v14; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *RarityFilterKindList; // x0
  Voice_BATTLE_array *v16; // x0
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *v17; // x8
  ListViewSort_FilterKind_array *v18; // x21
  ListViewSort_FilterKind_array *v19; // x0
  struct MaterialEventLogListViewItem_Info_o *v20; // x8

  if ( (byte_40FCC17 & 1) == 0 )
  {
    sub_B16FFC(&FilterKindList_TypeInfo, sort);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v5);
    byte_40FCC17 = 1;
  }
  if ( !sort )
    return 0;
  v6 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v6 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v6->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_30;
  v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                          ClassGroupFilterKindList,
                                          (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0LL) )
  {
    v9 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v9 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v9->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      goto LABEL_30;
    v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                             ClassFilterKindList,
                                             (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v11, 0LL) )
    {
      info_k__BackingField = this->fields._info_k__BackingField;
      if ( !info_k__BackingField )
        goto LABEL_30;
      if ( !ListViewSort__IsMatchClassFilter(sort, info_k__BackingField->fields.servantEntity, 0LL) )
        return 0;
    }
  }
  else
  {
    v13 = this->fields._info_k__BackingField;
    if ( !v13 )
      goto LABEL_30;
    if ( !ListViewSort__IsMatchClassGroupFilter(sort, v13->fields.servantEntity, 0LL) )
      return 0;
  }
  v14 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v14 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v14->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_30;
  v16 = System_Collections_Generic_List_Voice_BATTLE___ToArray(
          RarityFilterKindList,
          (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  v17 = FilterKindList_TypeInfo->static_fields->RarityFilterKindList;
  if ( !v17 )
    goto LABEL_30;
  v18 = (ListViewSort_FilterKind_array *)v16;
  v19 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)v17,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v19, 0LL)
    || ListViewSort__IsSelectedAllTargetFilters(sort, v18, 0LL) )
  {
    return 1;
  }
  v20 = this->fields._info_k__BackingField;
  if ( !v20 )
LABEL_30:
    sub_B170D4();
  return ListViewSort__IsMatchRarityFilter(sort, v20->fields.rarity, 0LL);
}


bool __fastcall MaterialEventLogListViewItem__SetSortValue(
        MaterialEventLogListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  MaterialEventLogListViewItem_c *klass; // x8
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  char v12; // w8
  bool result; // w0
  int64_t index; // x8
  System_Int32_array **v15; // x1

  if ( (byte_40FCC16 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, sort);
    byte_40FCC16 = 1;
  }
  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  v12 = ((__int64 (__fastcall *)(MaterialEventLogListViewItem_o *, ListViewSort_o *, void *))klass->vtable._5_IsMatchFilter.method)(
          this,
          sort,
          klass[1]._1.image);
  result = 0;
  if ( (v12 & 1) != 0 )
  {
    index = this->fields.index;
    this->fields.sortValue0 = 0LL;
    this->fields.sortValue0B = 0LL;
    this->fields.sortValue1 = index;
    v15 = (System_Int32_array **)StringLiteral_1/*""*/;
    this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.sortStr1, v15, v6, v7, v8, v9, v10, v11);
    result = 1;
    this->fields.sortValue1B = 0LL;
    this->fields.sortValue2 = 0LL;
    *(_WORD *)&this->fields.isTermination = 0;
    this->fields.sortValue2B = 0LL;
  }
  return result;
}


int32_t __fastcall MaterialEventLogListViewItem__get_genderType(
        MaterialEventLogListViewItem_o *this,
        const MethodInfo *method)
{
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x8

  info_k__BackingField = this->fields._info_k__BackingField;
  if ( !info_k__BackingField )
    sub_B170D4();
  return info_k__BackingField->fields.genderType;
}


MaterialEventLogListViewItem_Info_o *__fastcall MaterialEventLogListViewItem__get_info(
        MaterialEventLogListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._info_k__BackingField;
}


int32_t __fastcall MaterialEventLogListViewItem__get_kind(
        MaterialEventLogListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._kind_k__BackingField;
}


void __fastcall MaterialEventLogListViewItem__set_info(
        MaterialEventLogListViewItem_o *this,
        MaterialEventLogListViewItem_Info_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._info_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._info_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall MaterialEventLogListViewItem__set_kind(
        MaterialEventLogListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._kind_k__BackingField = value;
}


void __fastcall MaterialEventLogListViewItem_Info___ctor(
        MaterialEventLogListViewItem_Info_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F6966 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v6);
    byte_40F6966 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   method,
                                                   v2,
                                                   v3,
                                                   v4);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.playableLimitCountlist = v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.playableLimitCountlist,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields.genderType = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


MaterialEventLogListViewItem_Info_o *__fastcall MaterialEventLogListViewItem_Info__Clone(
        MaterialEventLogListViewItem_Info_o *this,
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
  __int64 v13; // x20
  const MethodInfo *v14; // x1
  bool IsNullOrEmpty; // w0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x1
  System_String_o *str; // x0
  Il2CppObject *v24; // x0
  bool v25; // w0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_o *ruby; // x0
  Il2CppObject *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct System_Action_MaterialEventLogListViewItem__o *on_click_act; // x0
  System_Action_MaterialEventLogListViewItem__c **v41; // x0
  System_Int32_array **voiceId; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **commonString; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **itm; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Collections_Generic_List_int__o *playableLimitCountlist; // x0
  System_Collections_Generic_List_int__o *v64; // x0
  bool v65; // w0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_String_o *playLimitCountMessage; // x0
  Il2CppObject *v73; // x0
  void *v75; // x0
  int v76; // w1
  __int64 v77; // x21
  System_Collections_Generic_List_Enumerator_int__o v78; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_int__o i; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40F6965 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_MaterialEventLogListViewItem__TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v8);
    sub_B16FFC(&MaterialEventLogListViewItem_Info_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v11);
    sub_B16FFC(&string_TypeInfo, v12);
    byte_40F6965 = 1;
  }
  memset(&i, 0, sizeof(i));
  v13 = sub_B170CC(MaterialEventLogListViewItem_Info_TypeInfo, method, v2, v3, v4);
  MaterialEventLogListViewItem_Info___ctor((MaterialEventLogListViewItem_Info_o *)v13, v14);
  IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.str, 0LL);
  v22 = 0LL;
  if ( !IsNullOrEmpty )
  {
    str = this->fields.str;
    if ( !str )
      goto LABEL_29;
    v24 = System_String__Clone(str, 0LL);
    v22 = (System_Int32_array **)v24;
    if ( v24 && (System_String_c *)v24->klass != string_TypeInfo )
      goto LABEL_30;
  }
  if ( !v13 )
LABEL_29:
    sub_B170D4();
  *(_QWORD *)(v13 + 16) = v22;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 16), v22, v16, v17, v18, v19, v20, v21);
  v25 = System_String__IsNullOrEmpty(this->fields.ruby, 0LL);
  v22 = 0LL;
  if ( !v25 )
  {
    ruby = this->fields.ruby;
    if ( !ruby )
      goto LABEL_29;
    v33 = System_String__Clone(ruby, 0LL);
    v22 = (System_Int32_array **)v33;
    if ( v33 && (System_String_c *)v33->klass != string_TypeInfo )
      goto LABEL_30;
  }
  *(_QWORD *)(v13 + 24) = v22;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 24), v22, v26, v27, v28, v29, v30, v31);
  *(_DWORD *)(v13 + 32) = this->fields.mPriority;
  *(_DWORD *)(v13 + 36) = this->fields.event_id;
  *(_DWORD *)(v13 + 40) = this->fields.war_id;
  *(_DWORD *)(v13 + 44) = this->fields.quest_id;
  *(_DWORD *)(v13 + 48) = this->fields.phase_max;
  *(_DWORD *)(v13 + 52) = this->fields.clear_phase_max;
  *(_DWORD *)(v13 + 56) = this->fields.svt_id;
  *(_DWORD *)(v13 + 60) = this->fields.limit_count;
  *(_DWORD *)(v13 + 64) = this->fields.flag;
  *(_DWORD *)(v13 + 68) = this->fields.font_size;
  on_click_act = this->fields.on_click_act;
  if ( !on_click_act )
  {
    v22 = 0LL;
    goto LABEL_17;
  }
  v41 = (System_Action_MaterialEventLogListViewItem__c **)((__int64 (__fastcall *)(struct System_Action_MaterialEventLogListViewItem__o *, Il2CppMethodPointer))on_click_act->klass->vtable._6_Clone.method)(
                                                            on_click_act,
                                                            on_click_act->klass->vtable._7_GetMethodImpl.methodPtr);
  v22 = (System_Int32_array **)v41;
  if ( !v41 || *v41 == System_Action_MaterialEventLogListViewItem__TypeInfo )
  {
LABEL_17:
    *(_QWORD *)(v13 + 72) = v22;
    sub_B16F98((BattleServantConfConponent_o *)(v13 + 72), v22, v34, v35, v36, v37, v38, v39);
    voiceId = (System_Int32_array **)this->fields.voiceId;
    *(_QWORD *)(v13 + 88) = voiceId;
    sub_B16F98((BattleServantConfConponent_o *)(v13 + 88), voiceId, v43, v44, v45, v46, v47, v48);
    *(_DWORD *)(v13 + 96) = this->fields.svtVoiceType;
    *(_DWORD *)(v13 + 100) = this->fields.voiceCondValue;
    *(_DWORD *)(v13 + 104) = this->fields.svtVoiceId;
    *(_DWORD *)(v13 + 108) = this->fields.win_result;
    *(_DWORD *)(v13 + 132) = this->fields.genderType;
    commonString = (System_Int32_array **)this->fields.commonString;
    *(_QWORD *)(v13 + 136) = commonString;
    sub_B16F98((BattleServantConfConponent_o *)(v13 + 136), commonString, v50, v51, v52, v53, v54, v55);
    itm = (System_Int32_array **)this->fields.itm;
    *(_QWORD *)(v13 + 80) = itm;
    sub_B16F98((BattleServantConfConponent_o *)(v13 + 80), itm, v57, v58, v59, v60, v61, v62);
    playableLimitCountlist = this->fields.playableLimitCountlist;
    if ( playableLimitCountlist )
    {
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v78,
        playableLimitCountlist,
        (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      for ( i = v78;
            System_Collections_Generic_List_Enumerator_int___MoveNext(
              &i,
              (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
            System_Collections_Generic_List_int___Add(
              v64,
              i.fields.current,
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__) )
      {
        v64 = *(System_Collections_Generic_List_int__o **)(v13 + 112);
        if ( !v64 )
          sub_B170D4();
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &i,
        (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      goto LABEL_23;
    }
    goto LABEL_29;
  }
  do
  {
LABEL_30:
    v75 = (void *)sub_B173C8(v22);
    if ( v76 != 1 )
      _Unwind_Resume(v75);
    v77 = *(_QWORD *)__cxa_begin_catch(v75);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &i,
      (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    if ( v77 )
      sub_B170A0();
LABEL_23:
    v65 = System_String__IsNullOrEmpty(this->fields.playLimitCountMessage, 0LL);
    v22 = 0LL;
    if ( v65 )
      break;
    playLimitCountMessage = this->fields.playLimitCountMessage;
    if ( !playLimitCountMessage )
      goto LABEL_29;
    v73 = System_String__Clone(playLimitCountMessage, 0LL);
    v22 = (System_Int32_array **)v73;
    if ( !v73 )
      break;
  }
  while ( (System_String_c *)v73->klass != string_TypeInfo );
  *(_QWORD *)(v13 + 120) = v22;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 120), v22, v66, v67, v68, v69, v70, v71);
  return (MaterialEventLogListViewItem_Info_o *)v13;
}


int32_t __fastcall MaterialEventLogListViewItem_Info__get_winResult(
        MaterialEventLogListViewItem_Info_o *this,
        const MethodInfo *method)
{
  if ( (this->fields.win_result & 0xFFFFFFFE) == 2 )
    return this->fields.win_result;
  else
    return 1;
}


void __fastcall MaterialEventLogListViewItem_Info__set_winResult(
        MaterialEventLogListViewItem_Info_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.win_result = value;
}