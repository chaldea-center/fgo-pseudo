void __fastcall MaterialEventLogListViewItem___ctor(MaterialEventLogListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
}


void __fastcall MaterialEventLogListViewItem___ctor_25269072(
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
  ListViewItem___ctor_23700744((ListViewItem_o *)this, index, 0LL);
  v7->fields.npdetail = (struct UILabel_o *)info;
  v7 = (BattleServantConfConponent_o *)((char *)v7 + 120);
  *(_DWORD *)&v7[-1].fields.isOpenAfter = kind;
  sub_B0D840(v7, (System_Int32_array **)info, v8, v9, v10, v11, v12, v13);
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
  if ( (byte_4214DA6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_VoiceMaterialCondMaster___, *(_QWORD *)&limitCount);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v5);
    this = (MaterialEventLogListViewItem_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4214DA6 = 1;
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
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44201040(voiceId, 0LL);
  if ( System_String__IsNullOrEmpty(v9, 0LL) )
    return 1;
  this = (MaterialEventLogListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  this = (MaterialEventLogListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_VoiceMaterialCondMaster___);
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
  this = (MaterialEventLogListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44201040(
                                             v15,
                                             0LL);
  if ( !v12 )
LABEL_16:
    sub_B0D97C(this);
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

  if ( (byte_4214DA8 & 1) == 0 )
  {
    sub_B0D8A4(&FilterKindList_TypeInfo, sort);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v5);
    byte_4214DA8 = 1;
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
                                          (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                             (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                                                                  (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  RarityFilterKindList = FilterKindList_TypeInfo->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_30;
  v15 = (ListViewSort_FilterKind_array *)ClassGroupFilterKindList;
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                           (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    sub_B0D97C(ClassGroupFilterKindList);
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

  if ( (byte_4214DA7 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, sort);
    byte_4214DA7 = 1;
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
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.sortStr1, v15, v6, v7, v8, v9, v10, v11);
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
    sub_B0D97C(this);
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
  sub_B0D840(
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
  __int64 v4; // x1
  System_Collections_Generic_List_int__o *v5; // x20

  if ( (byte_421271A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v4);
    byte_421271A = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.playableLimitCountlist = v5;
  sub_B0D840(&this->fields.playableLimitCountlist, v5);
  this->fields.genderType = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


MaterialEventLogListViewItem_Info_o *__fastcall MaterialEventLogListViewItem_Info__Clone(
        MaterialEventLogListViewItem_Info_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  MaterialEventLogListViewItem_Info_o *v11; // x20
  const MethodInfo *v12; // x1
  System_String_o *IsNullOrEmpty; // x0
  struct System_String_o *v14; // x1
  bool v15; // w0
  Il2CppObject *v16; // x0
  long double v17; // q0
  struct System_Action_MaterialEventLogListViewItem__o *on_click_act; // x0
  System_Action_MaterialEventLogListViewItem__c **v19; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x1
  struct System_String_o *commonString; // x1
  struct MaterialEventLogListViewItem_o *itm; // x1
  System_Collections_Generic_List_int__o *playableLimitCountlist; // x0
  bool v24; // w0
  Il2CppObject *v25; // x0
  void *v27; // x0
  int v28; // w1
  __int64 v29; // x21
  System_Collections_Generic_List_Enumerator_int__o v30; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_int__o i; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4212719 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_MaterialEventLogListViewItem__TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v6);
    sub_B0D8A4(&MaterialEventLogListViewItem_Info_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v9);
    sub_B0D8A4(&string_TypeInfo, v10);
    byte_4212719 = 1;
  }
  memset(&i, 0, sizeof(i));
  v11 = (MaterialEventLogListViewItem_Info_o *)sub_B0D974(MaterialEventLogListViewItem_Info_TypeInfo, method, v2);
  MaterialEventLogListViewItem_Info___ctor(v11, v12);
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(this->fields.str, 0LL);
  v14 = 0LL;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    IsNullOrEmpty = this->fields.str;
    if ( !IsNullOrEmpty )
      goto LABEL_29;
    IsNullOrEmpty = (System_String_o *)System_String__Clone(IsNullOrEmpty, 0LL);
    v14 = IsNullOrEmpty;
    if ( IsNullOrEmpty && IsNullOrEmpty->klass != string_TypeInfo )
      goto LABEL_30;
  }
  if ( !v11 )
LABEL_29:
    sub_B0D97C(IsNullOrEmpty);
  v11->fields.str = v14;
  sub_B0D840(&v11->fields, v14);
  v15 = System_String__IsNullOrEmpty(this->fields.ruby, 0LL);
  v14 = 0LL;
  if ( !v15 )
  {
    IsNullOrEmpty = this->fields.ruby;
    if ( !IsNullOrEmpty )
      goto LABEL_29;
    v16 = System_String__Clone(IsNullOrEmpty, 0LL);
    v14 = (struct System_String_o *)v16;
    if ( v16 && (System_String_c *)v16->klass != string_TypeInfo )
      goto LABEL_30;
  }
  v11->fields.ruby = v14;
  *(__n128 *)&v17 = sub_B0D840(&v11->fields.ruby, v14);
  v11->fields.mPriority = this->fields.mPriority;
  v11->fields.event_id = this->fields.event_id;
  v11->fields.war_id = this->fields.war_id;
  v11->fields.quest_id = this->fields.quest_id;
  v11->fields.phase_max = this->fields.phase_max;
  v11->fields.clear_phase_max = this->fields.clear_phase_max;
  v11->fields.svt_id = this->fields.svt_id;
  v11->fields.limit_count = this->fields.limit_count;
  v11->fields.flag = this->fields.flag;
  v11->fields.font_size = this->fields.font_size;
  on_click_act = this->fields.on_click_act;
  if ( !on_click_act )
  {
    v14 = 0LL;
    goto LABEL_17;
  }
  v19 = (System_Action_MaterialEventLogListViewItem__c **)((__int64 (__fastcall *)(struct System_Action_MaterialEventLogListViewItem__o *, Il2CppMethodPointer, long double))on_click_act->klass->vtable._6_Clone.method)(
                                                            on_click_act,
                                                            on_click_act->klass->vtable._7_GetMethodImpl.methodPtr,
                                                            v17);
  v14 = (struct System_String_o *)v19;
  if ( !v19 || *v19 == System_Action_MaterialEventLogListViewItem__TypeInfo )
  {
LABEL_17:
    v11->fields.on_click_act = (struct System_Action_MaterialEventLogListViewItem__o *)v14;
    sub_B0D840(&v11->fields.on_click_act, v14);
    voiceId = this->fields.voiceId;
    v11->fields.voiceId = voiceId;
    sub_B0D840(&v11->fields.voiceId, voiceId);
    v11->fields.svtVoiceType = this->fields.svtVoiceType;
    v11->fields.voiceCondValue = this->fields.voiceCondValue;
    v11->fields.svtVoiceId = this->fields.svtVoiceId;
    v11->fields.win_result = this->fields.win_result;
    v11->fields.genderType = this->fields.genderType;
    commonString = this->fields.commonString;
    v11->fields.commonString = commonString;
    sub_B0D840(&v11->fields.commonString, commonString);
    itm = this->fields.itm;
    v11->fields.itm = itm;
    sub_B0D840(&v11->fields.itm, itm);
    IsNullOrEmpty = (System_String_o *)this->fields.playableLimitCountlist;
    if ( IsNullOrEmpty )
    {
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v30,
        (System_Collections_Generic_List_int__o *)IsNullOrEmpty,
        (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      for ( i = v30;
            System_Collections_Generic_List_Enumerator_int___MoveNext(
              &i,
              (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
            System_Collections_Generic_List_int___Add(
              playableLimitCountlist,
              i.fields.current,
              (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__) )
      {
        playableLimitCountlist = v11->fields.playableLimitCountlist;
        if ( !playableLimitCountlist )
          sub_B0D97C(0LL);
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &i,
        (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      goto LABEL_23;
    }
    goto LABEL_29;
  }
  do
  {
LABEL_30:
    v27 = (void *)sub_B0DC70(v14);
    if ( v28 != 1 )
      _Unwind_Resume(v27);
    v29 = *(_QWORD *)__cxa_begin_catch(v27);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &i,
      (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    if ( v29 )
      sub_B0D948(v29, 0LL);
LABEL_23:
    v24 = System_String__IsNullOrEmpty(this->fields.playLimitCountMessage, 0LL);
    v14 = 0LL;
    if ( v24 )
      break;
    IsNullOrEmpty = this->fields.playLimitCountMessage;
    if ( !IsNullOrEmpty )
      goto LABEL_29;
    v25 = System_String__Clone(IsNullOrEmpty, 0LL);
    v14 = (struct System_String_o *)v25;
    if ( !v25 )
      break;
  }
  while ( (System_String_c *)v25->klass != string_TypeInfo );
  v11->fields.playLimitCountMessage = v14;
  sub_B0D840(&v11->fields.playLimitCountMessage, v14);
  return v11;
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