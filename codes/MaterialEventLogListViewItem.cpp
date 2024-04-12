void __fastcall MaterialEventLogListViewItem___ctor(MaterialEventLogListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
}


void __fastcall MaterialEventLogListViewItem___ctor_31548068(
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
  ListViewItem___ctor_23532700((ListViewItem_o *)this, index, 0LL);
  v7->fields.npdetail = (struct UILabel_o *)info;
  v7 = (BattleServantConfConponent_o *)((char *)v7 + 120);
  *(_DWORD *)&v7[-1].fields.isOpenAfter = kind;
  sub_B52920(v7, (System_Int32_array **)info, v8, v9, v10, v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MaterialEventLogListViewItem__CheckPlayableMaterial(
        MaterialEventLogListViewItem_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  MaterialEventLogListViewItem_o *v4; // x20
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x21
  System_String_o *v7; // x0
  struct MaterialEventLogListViewItem_Info_o *v9; // x8
  VoiceMaterialCondMaster_o *v10; // x20
  int32_t svtVoiceId; // w22
  int32_t voicePrefix; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v13; // x23

  v4 = this;
  if ( (byte_42B3770 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_VoiceMaterialCondMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    this = (MaterialEventLogListViewItem_o *)sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B3770 = 1;
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
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44824884(voiceId, 0LL);
  if ( System_String__IsNullOrEmpty(v7, 0LL) )
    return 1;
  this = (MaterialEventLogListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  this = (MaterialEventLogListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_VoiceMaterialCondMaster___);
  v9 = v4->fields._info_k__BackingField;
  if ( !v9 )
    goto LABEL_16;
  v10 = (VoiceMaterialCondMaster_o *)this;
  svtVoiceId = v9->fields.svtVoiceId;
  voicePrefix = v9->fields.voicePrefix;
  v13 = v9->fields.voiceId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  this = (MaterialEventLogListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44824884(
                                             v13,
                                             0LL);
  if ( !v10 )
LABEL_16:
    sub_B52A5C(this, *(_QWORD *)&limitCount);
  return VoiceMaterialCondMaster__IsVoicePlay(v10, svtVoiceId, voicePrefix, (System_String_o *)this, limitCount, 0LL);
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
  FilterKindList_c *v5; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassGroupFilterKindList; // x0
  ListViewSort_FilterKind_array *v7; // x0
  FilterKindList_c *v8; // x0
  ListViewSort_FilterKind_array *v9; // x0
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x8
  struct MaterialEventLogListViewItem_Info_o *v11; // x8
  FilterKindList_c *v12; // x0
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *RarityFilterKindList; // x8
  ListViewSort_FilterKind_array *v14; // x21
  ListViewSort_FilterKind_array *v15; // x0
  struct MaterialEventLogListViewItem_Info_o *v16; // x8

  if ( (byte_42B3772 & 1) == 0 )
  {
    sub_B52984(&FilterKindList_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_42B3772 = 1;
  }
  if ( !sort )
    return 0;
  v5 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_30;
  v7 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                          ClassGroupFilterKindList,
                                          (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)ListViewSort__IsUnSelectedAllTargetFilters(
                                                                                  sort,
                                                                                  v7,
                                                                                  0LL);
  if ( ((unsigned __int8)ClassGroupFilterKindList & 1) != 0 )
  {
    v8 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v8 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v8->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_30;
    v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                            ClassGroupFilterKindList,
                                            (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)ListViewSort__IsUnSelectedAllTargetFilters(
                                                                                    sort,
                                                                                    v9,
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
    v11 = this->fields._info_k__BackingField;
    if ( !v11 )
      goto LABEL_30;
    if ( !ListViewSort__IsMatchClassGroupFilter(sort, v11->fields.servantEntity, 0LL) )
      return 0;
  }
  v12 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v12 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v12->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_30;
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                                                  ClassGroupFilterKindList,
                                                                                  (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  RarityFilterKindList = FilterKindList_TypeInfo->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_30;
  v14 = (ListViewSort_FilterKind_array *)ClassGroupFilterKindList;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                           (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0LL) )
    return 1;
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)ListViewSort__IsSelectedAllTargetFilters(
                                                                                  sort,
                                                                                  v14,
                                                                                  0LL);
  if ( ((unsigned __int8)ClassGroupFilterKindList & 1) != 0 )
    return 1;
  v16 = this->fields._info_k__BackingField;
  if ( !v16 )
LABEL_30:
    sub_B52A5C(ClassGroupFilterKindList, sort);
  return ListViewSort__IsMatchRarityFilter(sort, v16->fields.rarity, 0LL);
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

  if ( (byte_42B3771 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B3771 = 1;
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
    sub_B52920((BattleServantConfConponent_o *)&this->fields.sortStr1, v15, v6, v7, v8, v9, v10, v11);
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
    sub_B52A5C(this, method);
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
  sub_B52920(
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
  System_Collections_Generic_List_int__o *v3; // x20

  if ( (byte_42ADCBC & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42ADCBC = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.playableLimitCountlist = v3;
  sub_B52920(&this->fields.playableLimitCountlist);
  this->fields.genderType = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


MaterialEventLogListViewItem_Info_o *__fastcall MaterialEventLogListViewItem_Info__Clone(
        MaterialEventLogListViewItem_Info_o *this,
        const MethodInfo *method)
{
  MaterialEventLogListViewItem_Info_o *v3; // x20
  const MethodInfo *v4; // x1
  System_String_o *IsNullOrEmpty; // x0
  struct System_String_o *v6; // x1
  bool v7; // w0
  Il2CppObject *v8; // x0
  long double v9; // q0
  struct System_Action_MaterialEventLogListViewItem__o *on_click_act; // x0
  System_Action_MaterialEventLogListViewItem__c **v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_int__o *playableLimitCountlist; // x0
  bool v14; // w0
  Il2CppObject *v15; // x0
  void *v17; // x0
  int v18; // w1
  __int64 v19; // x21
  System_Collections_Generic_List_Enumerator_int__o v20; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_int__o i; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42ADCBB & 1) == 0 )
  {
    sub_B52984(&System_Action_MaterialEventLogListViewItem__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B52984(&MaterialEventLogListViewItem_Info_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B52984(&string_TypeInfo);
    byte_42ADCBB = 1;
  }
  memset(&i, 0, sizeof(i));
  v3 = (MaterialEventLogListViewItem_Info_o *)sub_B52A54(MaterialEventLogListViewItem_Info_TypeInfo);
  MaterialEventLogListViewItem_Info___ctor(v3, v4);
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(this->fields.str, 0LL);
  v6 = 0LL;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    IsNullOrEmpty = this->fields.str;
    if ( !IsNullOrEmpty )
      goto LABEL_29;
    IsNullOrEmpty = (System_String_o *)System_String__Clone(IsNullOrEmpty, 0LL);
    v6 = IsNullOrEmpty;
    if ( IsNullOrEmpty && IsNullOrEmpty->klass != string_TypeInfo )
      goto LABEL_30;
  }
  if ( !v3 )
LABEL_29:
    sub_B52A5C(IsNullOrEmpty, v6);
  v3->fields.str = v6;
  sub_B52920(&v3->fields);
  v7 = System_String__IsNullOrEmpty(this->fields.ruby, 0LL);
  v6 = 0LL;
  if ( !v7 )
  {
    IsNullOrEmpty = this->fields.ruby;
    if ( !IsNullOrEmpty )
      goto LABEL_29;
    v8 = System_String__Clone(IsNullOrEmpty, 0LL);
    v6 = (struct System_String_o *)v8;
    if ( v8 && (System_String_c *)v8->klass != string_TypeInfo )
      goto LABEL_30;
  }
  v3->fields.ruby = v6;
  *(__n128 *)&v9 = sub_B52920(&v3->fields.ruby);
  v3->fields.mPriority = this->fields.mPriority;
  v3->fields.event_id = this->fields.event_id;
  v3->fields.war_id = this->fields.war_id;
  v3->fields.quest_id = this->fields.quest_id;
  v3->fields.phase_max = this->fields.phase_max;
  v3->fields.clear_phase_max = this->fields.clear_phase_max;
  v3->fields.svt_id = this->fields.svt_id;
  v3->fields.limit_count = this->fields.limit_count;
  v3->fields.flag = this->fields.flag;
  v3->fields.font_size = this->fields.font_size;
  on_click_act = this->fields.on_click_act;
  if ( !on_click_act )
  {
    v6 = 0LL;
    goto LABEL_17;
  }
  v11 = (System_Action_MaterialEventLogListViewItem__c **)((__int64 (__fastcall *)(struct System_Action_MaterialEventLogListViewItem__o *, Il2CppMethodPointer, long double))on_click_act->klass->vtable._6_Clone.method)(
                                                            on_click_act,
                                                            on_click_act->klass->vtable._7_GetMethodImpl.methodPtr,
                                                            v9);
  v6 = (struct System_String_o *)v11;
  if ( !v11 || *v11 == System_Action_MaterialEventLogListViewItem__TypeInfo )
  {
LABEL_17:
    v3->fields.on_click_act = (struct System_Action_MaterialEventLogListViewItem__o *)v6;
    sub_B52920(&v3->fields.on_click_act);
    v3->fields.voiceId = this->fields.voiceId;
    sub_B52920(&v3->fields.voiceId);
    v3->fields.svtVoiceType = this->fields.svtVoiceType;
    v3->fields.voiceCondValue = this->fields.voiceCondValue;
    v3->fields.svtVoiceId = this->fields.svtVoiceId;
    v3->fields.win_result = this->fields.win_result;
    v3->fields.genderType = this->fields.genderType;
    v3->fields.commonString = this->fields.commonString;
    sub_B52920(&v3->fields.commonString);
    v3->fields.itm = this->fields.itm;
    sub_B52920(&v3->fields.itm);
    IsNullOrEmpty = (System_String_o *)this->fields.playableLimitCountlist;
    if ( IsNullOrEmpty )
    {
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v20,
        (System_Collections_Generic_List_int__o *)IsNullOrEmpty,
        (const MethodInfo_3057DF4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      for ( i = v20;
            System_Collections_Generic_List_Enumerator_int___MoveNext(
              &i,
              (const MethodInfo_200F3F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
            System_Collections_Generic_List_int___Add(
              playableLimitCountlist,
              i.fields.current,
              (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__) )
      {
        playableLimitCountlist = v3->fields.playableLimitCountlist;
        if ( !playableLimitCountlist )
          sub_B52A5C(0LL, v12);
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &i,
        (const MethodInfo_200F3EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      goto LABEL_23;
    }
    goto LABEL_29;
  }
  do
  {
LABEL_30:
    v17 = (void *)sub_B52D50(v6);
    if ( v18 != 1 )
      _Unwind_Resume(v17);
    v19 = *(_QWORD *)__cxa_begin_catch(v17);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &i,
      (const MethodInfo_200F3EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    if ( v19 )
      sub_B52A28(v19, 0LL);
LABEL_23:
    v14 = System_String__IsNullOrEmpty(this->fields.playLimitCountMessage, 0LL);
    v6 = 0LL;
    if ( v14 )
      break;
    IsNullOrEmpty = this->fields.playLimitCountMessage;
    if ( !IsNullOrEmpty )
      goto LABEL_29;
    v15 = System_String__Clone(IsNullOrEmpty, 0LL);
    v6 = (struct System_String_o *)v15;
    if ( !v15 )
      break;
  }
  while ( (System_String_c *)v15->klass != string_TypeInfo );
  v3->fields.playLimitCountMessage = v6;
  sub_B52920(&v3->fields.playLimitCountMessage);
  return v3;
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