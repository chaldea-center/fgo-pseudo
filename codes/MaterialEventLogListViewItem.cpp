void __fastcall MaterialEventLogListViewItem___ctor(MaterialEventLogListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
}


void __fastcall MaterialEventLogListViewItem___ctor_25921364(
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
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  v7->fields.npdetail = (struct UILabel_o *)info;
  v7 = (BattleServantConfConponent_o *)((char *)v7 + 120);
  *(_DWORD *)&v7[-1].fields.isOpenAfter = kind;
  sub_B2C2F8(v7, (System_Int32_array **)info, v8, v9, v10, v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MaterialEventLogListViewItem__CheckPlayableMaterial(
        MaterialEventLogListViewItem_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  MaterialEventLogListViewItem_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x21
  System_String_o *v9; // x0
  struct MaterialEventLogListViewItem_Info_o *v11; // x8
  VoiceMaterialCondMaster_o *v12; // x20
  int32_t svtVoiceId; // w22
  int32_t voicePrefix; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v15; // x23

  v4 = this;
  if ( (byte_418816C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_VoiceMaterialCondMaster___, *(_QWORD *)&limitCount);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v5);
    this = (MaterialEventLogListViewItem_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_418816C = 1;
  }
  info_k__BackingField = v4->fields._info_k__BackingField;
  if ( !info_k__BackingField )
    goto LABEL_16;
  voiceId = info_k__BackingField->fields.voiceId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44796528(voiceId, 0LL);
  if ( System_String__IsNullOrEmpty(v9, 0LL) )
    return 1;
  this = (MaterialEventLogListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  this = (MaterialEventLogListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_VoiceMaterialCondMaster___);
  v11 = v4->fields._info_k__BackingField;
  if ( !v11 )
    goto LABEL_16;
  v12 = (VoiceMaterialCondMaster_o *)this;
  svtVoiceId = v11->fields.svtVoiceId;
  voicePrefix = v11->fields.voicePrefix;
  v15 = v11->fields.voiceId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  this = (MaterialEventLogListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44796528(
                                             v15,
                                             0LL);
  if ( !v12 )
LABEL_16:
    sub_B2C434(this, *(_QWORD *)&limitCount);
  return VoiceMaterialCondMaster__IsVoicePlay(v12, svtVoiceId, voicePrefix, (System_String_o *)this, limitCount, 0LL);
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
  ListViewSort_FilterKind_array *v10; // x0
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x8
  struct MaterialEventLogListViewItem_Info_o *v12; // x8
  FilterKindList_c *v13; // x0
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *RarityFilterKindList; // x8
  ListViewSort_FilterKind_array *v15; // x21
  ListViewSort_FilterKind_array *v16; // x0
  struct MaterialEventLogListViewItem_Info_o *v17; // x8

  if ( (byte_418816E & 1) == 0 )
  {
    sub_B2C35C(&FilterKindList_TypeInfo, sort);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v5);
    byte_418816E = 1;
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
                                          (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)ListViewSort__IsUnSelectedAllTargetFilters(
                                                                                  sort,
                                                                                  v8,
                                                                                  0LL);
  if ( ((unsigned __int8)ClassGroupFilterKindList & 1) != 0 )
  {
    v9 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v9 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v9->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_30;
    v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                             ClassGroupFilterKindList,
                                             (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)ListViewSort__IsUnSelectedAllTargetFilters(
                                                                                    sort,
                                                                                    v10,
                                                                                    0LL);
    if ( ((unsigned __int8)ClassGroupFilterKindList & 1) == 0 )
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
    v12 = this->fields._info_k__BackingField;
    if ( !v12 )
      goto LABEL_30;
    if ( !ListViewSort__IsMatchClassGroupFilter(sort, v12->fields.servantEntity, 0LL) )
      return 0;
  }
  v13 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v13 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v13->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_30;
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                                                  ClassGroupFilterKindList,
                                                                                  (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  RarityFilterKindList = FilterKindList_TypeInfo->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_30;
  v15 = (ListViewSort_FilterKind_array *)ClassGroupFilterKindList;
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL) )
    return 1;
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)ListViewSort__IsSelectedAllTargetFilters(
                                                                                  sort,
                                                                                  v15,
                                                                                  0LL);
  if ( ((unsigned __int8)ClassGroupFilterKindList & 1) != 0 )
    return 1;
  v17 = this->fields._info_k__BackingField;
  if ( !v17 )
LABEL_30:
    sub_B2C434(ClassGroupFilterKindList, sort);
  return ListViewSort__IsMatchRarityFilter(sort, v17->fields.rarity, 0LL);
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

  if ( (byte_418816D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, sort);
    byte_418816D = 1;
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
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.sortStr1, v15, v6, v7, v8, v9, v10, v11);
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
    sub_B2C434(this, method);
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
  sub_B2C2F8(
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
  __int64 v3; // x1
  System_Collections_Generic_List_int__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4185D19 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v3);
    byte_4185D19 = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.playableLimitCountlist = v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.playableLimitCountlist,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  this->fields.genderType = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


MaterialEventLogListViewItem_Info_o *__fastcall MaterialEventLogListViewItem_Info__Clone(
        MaterialEventLogListViewItem_Info_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  const MethodInfo *v11; // x1
  System_String_o *IsNullOrEmpty; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x1
  bool v20; // w0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  Il2CppObject *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct System_Action_MaterialEventLogListViewItem__o *on_click_act; // x0
  System_Action_MaterialEventLogListViewItem__c **v35; // x0
  System_Int32_array **voiceId; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **commonString; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **itm; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x1
  System_Collections_Generic_List_int__o *v58; // x0
  bool v59; // w0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  Il2CppObject *v66; // x0
  void *v68; // x0
  int v69; // w1
  __int64 v70; // x21
  System_Collections_Generic_List_Enumerator_int__o v71; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_int__o i; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4185D18 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_MaterialEventLogListViewItem__TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v5);
    sub_B2C35C(&MaterialEventLogListViewItem_Info_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v8);
    sub_B2C35C(&string_TypeInfo, v9);
    byte_4185D18 = 1;
  }
  memset(&i, 0, sizeof(i));
  v10 = sub_B2C42C(MaterialEventLogListViewItem_Info_TypeInfo);
  MaterialEventLogListViewItem_Info___ctor((MaterialEventLogListViewItem_Info_o *)v10, v11);
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(this->fields.str, 0LL);
  v19 = 0LL;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    IsNullOrEmpty = this->fields.str;
    if ( !IsNullOrEmpty )
      goto LABEL_29;
    IsNullOrEmpty = (System_String_o *)System_String__Clone(IsNullOrEmpty, 0LL);
    v19 = (System_Int32_array **)IsNullOrEmpty;
    if ( IsNullOrEmpty && IsNullOrEmpty->klass != string_TypeInfo )
      goto LABEL_30;
  }
  if ( !v10 )
LABEL_29:
    sub_B2C434(IsNullOrEmpty, v19);
  *(_QWORD *)(v10 + 16) = v19;
  sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 16), v19, v13, v14, v15, v16, v17, v18);
  v20 = System_String__IsNullOrEmpty(this->fields.ruby, 0LL);
  v19 = 0LL;
  if ( !v20 )
  {
    IsNullOrEmpty = this->fields.ruby;
    if ( !IsNullOrEmpty )
      goto LABEL_29;
    v27 = System_String__Clone(IsNullOrEmpty, 0LL);
    v19 = (System_Int32_array **)v27;
    if ( v27 && (System_String_c *)v27->klass != string_TypeInfo )
      goto LABEL_30;
  }
  *(_QWORD *)(v10 + 24) = v19;
  sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 24), v19, v21, v22, v23, v24, v25, v26);
  *(_DWORD *)(v10 + 32) = this->fields.mPriority;
  *(_DWORD *)(v10 + 36) = this->fields.event_id;
  *(_DWORD *)(v10 + 40) = this->fields.war_id;
  *(_DWORD *)(v10 + 44) = this->fields.quest_id;
  *(_DWORD *)(v10 + 52) = this->fields.phase_max;
  *(_DWORD *)(v10 + 56) = this->fields.clear_phase_max;
  *(_DWORD *)(v10 + 60) = this->fields.svt_id;
  *(_DWORD *)(v10 + 64) = this->fields.limit_count;
  *(_DWORD *)(v10 + 68) = this->fields.flag;
  *(_DWORD *)(v10 + 72) = this->fields.font_size;
  on_click_act = this->fields.on_click_act;
  if ( !on_click_act )
  {
    v19 = 0LL;
    goto LABEL_17;
  }
  v35 = (System_Action_MaterialEventLogListViewItem__c **)((__int64 (__fastcall *)(struct System_Action_MaterialEventLogListViewItem__o *, Il2CppMethodPointer))on_click_act->klass->vtable._6_Clone.method)(
                                                            on_click_act,
                                                            on_click_act->klass->vtable._7_GetMethodImpl.methodPtr);
  v19 = (System_Int32_array **)v35;
  if ( !v35 || *v35 == System_Action_MaterialEventLogListViewItem__TypeInfo )
  {
LABEL_17:
    *(_QWORD *)(v10 + 80) = v19;
    sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 80), v19, v28, v29, v30, v31, v32, v33);
    voiceId = (System_Int32_array **)this->fields.voiceId;
    *(_QWORD *)(v10 + 96) = voiceId;
    sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 96), voiceId, v37, v38, v39, v40, v41, v42);
    *(_DWORD *)(v10 + 104) = this->fields.svtVoiceType;
    *(_DWORD *)(v10 + 108) = this->fields.voiceCondValue;
    *(_DWORD *)(v10 + 112) = this->fields.svtVoiceId;
    *(_DWORD *)(v10 + 116) = this->fields.win_result;
    *(_DWORD *)(v10 + 140) = this->fields.genderType;
    commonString = (System_Int32_array **)this->fields.commonString;
    *(_QWORD *)(v10 + 144) = commonString;
    sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 144), commonString, v44, v45, v46, v47, v48, v49);
    itm = (System_Int32_array **)this->fields.itm;
    *(_QWORD *)(v10 + 88) = itm;
    sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 88), itm, v51, v52, v53, v54, v55, v56);
    IsNullOrEmpty = (System_String_o *)this->fields.playableLimitCountlist;
    if ( IsNullOrEmpty )
    {
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v71,
        (System_Collections_Generic_List_int__o *)IsNullOrEmpty,
        (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      for ( i = v71;
            System_Collections_Generic_List_Enumerator_int___MoveNext(
              &i,
              (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
            System_Collections_Generic_List_int___Add(
              v58,
              i.fields.current,
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__) )
      {
        v58 = *(System_Collections_Generic_List_int__o **)(v10 + 120);
        if ( !v58 )
          sub_B2C434(0LL, v57);
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &i,
        (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      goto LABEL_23;
    }
    goto LABEL_29;
  }
  do
  {
LABEL_30:
    v68 = (void *)sub_B2C728(v19);
    if ( v69 != 1 )
      _Unwind_Resume(v68);
    v70 = *(_QWORD *)__cxa_begin_catch(v68);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &i,
      (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    if ( v70 )
      sub_B2C400(v70, 0LL);
LABEL_23:
    v59 = System_String__IsNullOrEmpty(this->fields.playLimitCountMessage, 0LL);
    v19 = 0LL;
    if ( v59 )
      break;
    IsNullOrEmpty = this->fields.playLimitCountMessage;
    if ( !IsNullOrEmpty )
      goto LABEL_29;
    v66 = System_String__Clone(IsNullOrEmpty, 0LL);
    v19 = (System_Int32_array **)v66;
    if ( !v66 )
      break;
  }
  while ( (System_String_c *)v66->klass != string_TypeInfo );
  *(_QWORD *)(v10 + 128) = v19;
  sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 128), v19, v60, v61, v62, v63, v64, v65);
  return (MaterialEventLogListViewItem_Info_o *)v10;
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