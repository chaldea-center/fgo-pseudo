void __fastcall MaterialEventLogListViewItem___ctor(MaterialEventLogListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
}


void __fastcall MaterialEventLogListViewItem___ctor_32002404(
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
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  v7->fields.npdetail = (struct UILabel_o *)info;
  v7 = (BattleServantConfConponent_o *)((char *)v7 + 120);
  *(_DWORD *)&v7[-1].fields.isOpenAfter = kind;
  sub_B5D560(v7, (System_Int32_array **)info, v8, v9, v10, v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MaterialEventLogListViewItem__CheckPlayableMaterial(
        MaterialEventLogListViewItem_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  MaterialEventLogListViewItem_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x21
  System_String_o *v14; // x0
  struct MaterialEventLogListViewItem_Info_o *v16; // x8
  VoiceMaterialCondMaster_o *v17; // x20
  int32_t svtVoiceId; // w22
  int32_t voicePrefix; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v20; // x23

  v5 = this;
  if ( (byte_42EC327 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_VoiceMaterialCondMaster___, limitCount, (_DWORD)method, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v6, v7, v8);
    this = (MaterialEventLogListViewItem_o *)sub_B5D5C4(
                                               &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                               v9,
                                               v10,
                                               v11);
    byte_42EC327 = 1;
  }
  info_k__BackingField = v5->fields._info_k__BackingField;
  if ( !info_k__BackingField )
    goto LABEL_16;
  voiceId = info_k__BackingField->fields.voiceId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(voiceId, 0LL);
  if ( System_String__IsNullOrEmpty(v14, 0LL) )
    return 1;
  this = (MaterialEventLogListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  this = (MaterialEventLogListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_VoiceMaterialCondMaster___);
  v16 = v5->fields._info_k__BackingField;
  if ( !v16 )
    goto LABEL_16;
  v17 = (VoiceMaterialCondMaster_o *)this;
  svtVoiceId = v16->fields.svtVoiceId;
  voicePrefix = v16->fields.voicePrefix;
  v20 = v16->fields.voiceId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  this = (MaterialEventLogListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(
                                             v20,
                                             0LL);
  if ( !v17 )
LABEL_16:
    sub_B5D69C(this, *(_QWORD *)&limitCount);
  return VoiceMaterialCondMaster__IsVoicePlay(v17, svtVoiceId, voicePrefix, (System_String_o *)this, limitCount, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  FilterKindList_c *v9; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassGroupFilterKindList; // x0
  ListViewSort_FilterKind_array *v11; // x0
  FilterKindList_c *v12; // x0
  ListViewSort_FilterKind_array *v13; // x0
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x8
  struct MaterialEventLogListViewItem_Info_o *v15; // x8
  FilterKindList_c *v16; // x0
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *RarityFilterKindList; // x8
  ListViewSort_FilterKind_array *v18; // x21
  ListViewSort_FilterKind_array *v19; // x0
  struct MaterialEventLogListViewItem_Info_o *v20; // x8

  if ( (byte_42EC329 & 1) == 0 )
  {
    sub_B5D5C4(&FilterKindList_TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6, v7, v8);
    byte_42EC329 = 1;
  }
  if ( !sort )
    return 0;
  v9 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v9->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_30;
  v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)ListViewSort__IsUnSelectedAllTargetFilters(
                                                                                  sort,
                                                                                  v11,
                                                                                  0LL);
  if ( ((unsigned __int8)ClassGroupFilterKindList & 1) != 0 )
  {
    v12 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v12 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v12->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_30;
    v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                             ClassGroupFilterKindList,
                                             (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)ListViewSort__IsUnSelectedAllTargetFilters(
                                                                                    sort,
                                                                                    v13,
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
    v15 = this->fields._info_k__BackingField;
    if ( !v15 )
      goto LABEL_30;
    if ( !ListViewSort__IsMatchClassGroupFilter(sort, v15->fields.servantEntity, 0LL) )
      return 0;
  }
  v16 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v16 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v16->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_30;
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                                                  ClassGroupFilterKindList,
                                                                                  (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  RarityFilterKindList = FilterKindList_TypeInfo->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_30;
  v18 = (ListViewSort_FilterKind_array *)ClassGroupFilterKindList;
  v19 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v19, 0LL) )
    return 1;
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)ListViewSort__IsSelectedAllTargetFilters(
                                                                                  sort,
                                                                                  v18,
                                                                                  0LL);
  if ( ((unsigned __int8)ClassGroupFilterKindList & 1) != 0 )
    return 1;
  v20 = this->fields._info_k__BackingField;
  if ( !v20 )
LABEL_30:
    sub_B5D69C(ClassGroupFilterKindList, sort);
  return ListViewSort__IsMatchRarityFilter(sort, v20->fields.rarity, 0LL);
}


bool __fastcall MaterialEventLogListViewItem__SetSortValue(
        MaterialEventLogListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v3; // x3
  MaterialEventLogListViewItem_c *klass; // x8
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  char v13; // w8
  bool result; // w0
  int64_t index; // x8
  System_Int32_array **v16; // x1

  if ( (byte_42EC328 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)sort, (_DWORD)method, v3);
    byte_42EC328 = 1;
  }
  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  v13 = ((__int64 (__fastcall *)(MaterialEventLogListViewItem_o *, ListViewSort_o *, void *))klass->vtable._5_IsMatchFilter.method)(
          this,
          sort,
          klass[1]._1.image);
  result = 0;
  if ( (v13 & 1) != 0 )
  {
    index = this->fields.index;
    this->fields.sortValue0 = 0LL;
    this->fields.sortValue0B = 0LL;
    this->fields.sortValue1 = index;
    v16 = (System_Int32_array **)StringLiteral_1/*""*/;
    this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.sortStr1, v16, v7, v8, v9, v10, v11, v12);
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
    sub_B5D69C(this, method);
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
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_int__o *v8; // x20

  if ( (byte_42E5F43 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v5, v6, v7);
    byte_42E5F43 = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.playableLimitCountlist = v8;
  sub_B5D560(&this->fields.playableLimitCountlist);
  this->fields.genderType = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


MaterialEventLogListViewItem_Info_o *__fastcall MaterialEventLogListViewItem_Info__Clone(
        MaterialEventLogListViewItem_Info_o *this,
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
  MaterialEventLogListViewItem_Info_o *v26; // x20
  const MethodInfo *v27; // x1
  System_String_o *IsNullOrEmpty; // x0
  struct System_String_o *v29; // x1
  bool v30; // w0
  Il2CppObject *v31; // x0
  long double v32; // q0
  struct System_Action_MaterialEventLogListViewItem__o *on_click_act; // x0
  System_Action_MaterialEventLogListViewItem__c **v34; // x0
  __int64 v35; // x1
  System_Collections_Generic_List_int__o *playableLimitCountlist; // x0
  bool v37; // w0
  Il2CppObject *v38; // x0
  void *v40; // x0
  int v41; // w1
  __int64 v42; // x21
  System_Collections_Generic_List_Enumerator_int__o v43; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_int__o i; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42E5F42 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_MaterialEventLogListViewItem__TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v11, v12, v13);
    sub_B5D5C4(&MaterialEventLogListViewItem_Info_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v20, v21, v22);
    sub_B5D5C4(&string_TypeInfo, v23, v24, v25);
    byte_42E5F42 = 1;
  }
  memset(&i, 0, sizeof(i));
  v26 = (MaterialEventLogListViewItem_Info_o *)sub_B5D694(MaterialEventLogListViewItem_Info_TypeInfo);
  MaterialEventLogListViewItem_Info___ctor(v26, v27);
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(this->fields.str, 0LL);
  v29 = 0LL;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    IsNullOrEmpty = this->fields.str;
    if ( !IsNullOrEmpty )
      goto LABEL_29;
    IsNullOrEmpty = (System_String_o *)System_String__Clone(IsNullOrEmpty, 0LL);
    v29 = IsNullOrEmpty;
    if ( IsNullOrEmpty && IsNullOrEmpty->klass != string_TypeInfo )
      goto LABEL_30;
  }
  if ( !v26 )
LABEL_29:
    sub_B5D69C(IsNullOrEmpty, v29);
  v26->fields.str = v29;
  sub_B5D560(&v26->fields);
  v30 = System_String__IsNullOrEmpty(this->fields.ruby, 0LL);
  v29 = 0LL;
  if ( !v30 )
  {
    IsNullOrEmpty = this->fields.ruby;
    if ( !IsNullOrEmpty )
      goto LABEL_29;
    v31 = System_String__Clone(IsNullOrEmpty, 0LL);
    v29 = (struct System_String_o *)v31;
    if ( v31 && (System_String_c *)v31->klass != string_TypeInfo )
      goto LABEL_30;
  }
  v26->fields.ruby = v29;
  *(__n128 *)&v32 = sub_B5D560(&v26->fields.ruby);
  v26->fields.mPriority = this->fields.mPriority;
  v26->fields.event_id = this->fields.event_id;
  v26->fields.war_id = this->fields.war_id;
  v26->fields.quest_id = this->fields.quest_id;
  v26->fields.phase_max = this->fields.phase_max;
  v26->fields.clear_phase_max = this->fields.clear_phase_max;
  v26->fields.svt_id = this->fields.svt_id;
  v26->fields.limit_count = this->fields.limit_count;
  v26->fields.flag = this->fields.flag;
  v26->fields.font_size = this->fields.font_size;
  on_click_act = this->fields.on_click_act;
  if ( !on_click_act )
  {
    v29 = 0LL;
    goto LABEL_17;
  }
  v34 = (System_Action_MaterialEventLogListViewItem__c **)((__int64 (__fastcall *)(struct System_Action_MaterialEventLogListViewItem__o *, Il2CppMethodPointer, long double))on_click_act->klass->vtable._6_Clone.method)(
                                                            on_click_act,
                                                            on_click_act->klass->vtable._7_GetMethodImpl.methodPtr,
                                                            v32);
  v29 = (struct System_String_o *)v34;
  if ( !v34 || *v34 == System_Action_MaterialEventLogListViewItem__TypeInfo )
  {
LABEL_17:
    v26->fields.on_click_act = (struct System_Action_MaterialEventLogListViewItem__o *)v29;
    sub_B5D560(&v26->fields.on_click_act);
    v26->fields.voiceId = this->fields.voiceId;
    sub_B5D560(&v26->fields.voiceId);
    v26->fields.svtVoiceType = this->fields.svtVoiceType;
    v26->fields.voiceCondValue = this->fields.voiceCondValue;
    v26->fields.svtVoiceId = this->fields.svtVoiceId;
    v26->fields.win_result = this->fields.win_result;
    v26->fields.genderType = this->fields.genderType;
    v26->fields.commonString = this->fields.commonString;
    sub_B5D560(&v26->fields.commonString);
    v26->fields.itm = this->fields.itm;
    sub_B5D560(&v26->fields.itm);
    IsNullOrEmpty = (System_String_o *)this->fields.playableLimitCountlist;
    if ( IsNullOrEmpty )
    {
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v43,
        (System_Collections_Generic_List_int__o *)IsNullOrEmpty,
        (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      for ( i = v43;
            System_Collections_Generic_List_Enumerator_int___MoveNext(
              &i,
              (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
            System_Collections_Generic_List_int___Add(
              playableLimitCountlist,
              i.fields.current,
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__) )
      {
        playableLimitCountlist = v26->fields.playableLimitCountlist;
        if ( !playableLimitCountlist )
          sub_B5D69C(0LL, v35);
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &i,
        (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      goto LABEL_23;
    }
    goto LABEL_29;
  }
  do
  {
LABEL_30:
    v40 = (void *)sub_B5D990(v29);
    if ( v41 != 1 )
      _Unwind_Resume(v40);
    v42 = *(_QWORD *)__cxa_begin_catch(v40);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &i,
      (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    if ( v42 )
      sub_B5D668(v42, 0LL);
LABEL_23:
    v37 = System_String__IsNullOrEmpty(this->fields.playLimitCountMessage, 0LL);
    v29 = 0LL;
    if ( v37 )
      break;
    IsNullOrEmpty = this->fields.playLimitCountMessage;
    if ( !IsNullOrEmpty )
      goto LABEL_29;
    v38 = System_String__Clone(IsNullOrEmpty, 0LL);
    v29 = (struct System_String_o *)v38;
    if ( !v38 )
      break;
  }
  while ( (System_String_c *)v38->klass != string_TypeInfo );
  v26->fields.playLimitCountMessage = v29;
  sub_B5D560(&v26->fields.playLimitCountMessage);
  return v26;
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