void __fastcall MaterialEventLogListViewItem___ctor(MaterialEventLogListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
}


void __fastcall MaterialEventLogListViewItem___ctor_31778656(
        MaterialEventLogListViewItem_o *this,
        int32_t index,
        int32_t kind,
        MaterialEventLogListViewItem_Info_o *info,
        const MethodInfo *method)
{
  MaterialEventLogListViewItem_o *v7; // x21

  v7 = this;
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  v7->fields._info_k__BackingField = info;
  v7 = (MaterialEventLogListViewItem_o *)((char *)v7 + 120);
  LODWORD(v7[-1].fields._info_k__BackingField) = kind;
  sub_1BCA784(v7, info);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MaterialEventLogListViewItem__CheckPlayableMaterial(
        MaterialEventLogListViewItem_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  MaterialEventLogListViewItem_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x21
  System_String_o *v11; // x0
  struct MaterialEventLogListViewItem_Info_o *v13; // x8
  VoiceMaterialCondMaster_o *v14; // x20
  int32_t svtVoiceId; // w22
  int32_t voicePrefix; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v17; // x23

  v4 = this;
  if ( (byte_4B117E9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_VoiceMaterialCondMaster___, *(_QWORD *)&limitCount, method);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v5, v6);
    this = (MaterialEventLogListViewItem_o *)sub_1BCA7E0(
                                               &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                               v7,
                                               v8);
    byte_4B117E9 = 1;
  }
  info_k__BackingField = v4->fields._info_k__BackingField;
  if ( !info_k__BackingField )
    goto LABEL_14;
  voiceId = info_k__BackingField->fields.voiceId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, *(_QWORD *)&limitCount);
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(voiceId, 0LL);
  if ( System_String__IsNullOrEmpty(v11, 0LL) )
    return 1;
  this = (MaterialEventLogListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  this = (MaterialEventLogListViewItem_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_VoiceMaterialCondMaster___);
  v13 = v4->fields._info_k__BackingField;
  if ( !v13 )
    goto LABEL_14;
  v14 = (VoiceMaterialCondMaster_o *)this;
  svtVoiceId = v13->fields.svtVoiceId;
  voicePrefix = v13->fields.voicePrefix;
  v17 = v13->fields.voiceId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, *(_QWORD *)&limitCount);
  this = (MaterialEventLogListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(
                                             v17,
                                             0LL);
  if ( !v14 )
LABEL_14:
    sub_1BCAA3C(this, *(_QWORD *)&limitCount);
  return VoiceMaterialCondMaster__IsVoicePlay(v14, svtVoiceId, voicePrefix, (System_String_o *)this, limitCount, 0LL);
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
  __int64 v6; // x2
  FilterKindList_c *v7; // x0
  System_Collections_Generic_List_T__o *ClassGroupFilterKindList; // x0
  ListViewSort_FilterKind_array *v9; // x0
  FilterKindList_c *v10; // x0
  ListViewSort_FilterKind_array *v11; // x0
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x8
  struct MaterialEventLogListViewItem_Info_o *v13; // x8
  FilterKindList_c *v14; // x0
  System_Collections_Generic_List_T__o *RarityFilterKindList; // x8
  ListViewSort_FilterKind_array *v16; // x21
  ListViewSort_FilterKind_array *v17; // x0
  struct MaterialEventLogListViewItem_Info_o *v18; // x8

  if ( (byte_4B117EB & 1) == 0 )
  {
    sub_1BCA7E0(&FilterKindList_TypeInfo, sort, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v5, v6);
    byte_4B117EB = 1;
  }
  if ( !sort )
    return 0;
  v7 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v7 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v7->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_27;
  v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          ClassGroupFilterKindList,
                                          (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)ListViewSort__IsUnSelectedAllTargetFilters(
                                                                       sort,
                                                                       v9,
                                                                       0LL);
  if ( ((unsigned __int8)ClassGroupFilterKindList & 1) != 0 )
  {
    v10 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
      v10 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v10->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_27;
    v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             ClassGroupFilterKindList,
                                             (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)ListViewSort__IsUnSelectedAllTargetFilters(
                                                                         sort,
                                                                         v11,
                                                                         0LL);
    if ( ((unsigned __int8)ClassGroupFilterKindList & 1) == 0 )
    {
      info_k__BackingField = this->fields._info_k__BackingField;
      if ( !info_k__BackingField )
        goto LABEL_27;
      if ( !ListViewSort__IsMatchClassFilter(sort, info_k__BackingField->fields.servantEntity, 0LL) )
        return 0;
    }
  }
  else
  {
    v13 = this->fields._info_k__BackingField;
    if ( !v13 )
      goto LABEL_27;
    if ( !ListViewSort__IsMatchClassGroupFilter(sort, v13->fields.servantEntity, 0LL) )
      return 0;
  }
  v14 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v14 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v14->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_27;
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                       ClassGroupFilterKindList,
                                                                       (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  RarityFilterKindList = (System_Collections_Generic_List_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_27;
  v16 = (ListViewSort_FilterKind_array *)ClassGroupFilterKindList;
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           RarityFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0LL) )
    return 1;
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)ListViewSort__IsSelectedAllTargetFilters(
                                                                       sort,
                                                                       v16,
                                                                       0LL);
  if ( ((unsigned __int8)ClassGroupFilterKindList & 1) != 0 )
    return 1;
  v18 = this->fields._info_k__BackingField;
  if ( !v18 )
LABEL_27:
    sub_1BCAA3C(ClassGroupFilterKindList, sort);
  return ListViewSort__IsMatchRarityFilter(sort, v18->fields.rarity, 0LL);
}


bool __fastcall MaterialEventLogListViewItem__SetSortValue(
        MaterialEventLogListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  MaterialEventLogListViewItem_c *klass; // x8
  char v6; // w20
  int64_t index; // x8
  void *v8; // x1
  struct System_String_o **p_sortStr1; // x19

  if ( (byte_4B117EA & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, sort, method);
    byte_4B117EA = 1;
  }
  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  v6 = ((__int64 (__fastcall *)(MaterialEventLogListViewItem_o *, ListViewSort_o *, void *))klass->vtable._5_IsMatchFilter.method)(
         this,
         sort,
         klass[1]._1.image);
  if ( (v6 & 1) != 0 )
  {
    index = this->fields.index;
    this->fields.sortValue0 = 0LL;
    this->fields.sortValue0B = 0LL;
    this->fields.sortValue1 = index;
    v8 = StringLiteral_1/*""*/;
    this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
    p_sortStr1 = &this->fields.sortStr1;
    sub_1BCA784(p_sortStr1, v8);
    p_sortStr1[1] = 0LL;
    p_sortStr1[2] = 0LL;
    *((_WORD *)p_sortStr1 + 16) = 0;
    p_sortStr1[3] = 0LL;
  }
  return v6 & 1;
}


int32_t __fastcall MaterialEventLogListViewItem__get_genderType(
        MaterialEventLogListViewItem_o *this,
        const MethodInfo *method)
{
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x8

  info_k__BackingField = this->fields._info_k__BackingField;
  if ( !info_k__BackingField )
    sub_1BCAA3C(this, method);
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
  this->fields._info_k__BackingField = value;
  sub_1BCA784(&this->fields._info_k__BackingField, value);
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
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_int__o *v7; // x20

  if ( (byte_4B117ED & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v5, v6);
    byte_4B117ED = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   method,
                                                   v2,
                                                   v3);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.playableLimitCountlist = v7;
  sub_1BCA784(&this->fields.playableLimitCountlist, v7);
  this->fields.genderType = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


MaterialEventLogListViewItem_Info_o *__fastcall MaterialEventLogListViewItem_Info__Clone(
        MaterialEventLogListViewItem_Info_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 *v4; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x20
  const MethodInfo *v21; // x1
  System_String_o *IsNullOrEmpty; // x0
  Il2CppObject *v23; // x1
  bool v24; // w0
  Il2CppObject *v25; // x0
  struct System_Action_MaterialEventLogListViewItem__o *on_click_act; // x0
  __int64 v27; // x0
  __int64 v28; // x21
  __int64 v29; // x1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x1
  struct System_String_o *commonString; // x1
  struct MaterialEventLogListViewItem_o *itm; // x1
  __int64 v33; // x1
  System_Collections_Generic_List_int__o *v34; // x0
  __int64 current; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  bool v39; // w0
  Il2CppObject *v40; // x0
  __int64 *v42; // x0
  const MethodInfo_3312C4C **v43; // x23
  int v44; // w1
  __int64 v45; // x22
  System_Collections_Generic_List_Enumerator_int__o v46; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v47; // [xsp+20h] [xbp-50h] BYREF

  v4 = &qword_4B11000;
  if ( (byte_4B117EC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_MaterialEventLogListViewItem__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v10, v11);
    sub_1BCA7E0(&MaterialEventLogListViewItem_Info_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v16, v17);
    sub_1BCA7E0(&string_TypeInfo, v18, v19);
    byte_4B117EC = 1;
  }
  memset(&v47, 0, sizeof(v47));
  v20 = sub_1BCAA2C(MaterialEventLogListViewItem_Info_TypeInfo, method, v2, v3);
  MaterialEventLogListViewItem_Info___ctor((MaterialEventLogListViewItem_Info_o *)v20, v21);
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(this->fields.str, 0LL);
  v23 = 0LL;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    IsNullOrEmpty = this->fields.str;
    if ( !IsNullOrEmpty )
      goto LABEL_33;
    IsNullOrEmpty = (System_String_o *)System_String__Clone(IsNullOrEmpty, 0LL);
    v23 = (Il2CppObject *)IsNullOrEmpty;
    if ( IsNullOrEmpty && IsNullOrEmpty->klass != string_TypeInfo )
      goto LABEL_34;
  }
  if ( !v20 )
LABEL_33:
    sub_1BCAA3C(IsNullOrEmpty, v23);
  *(_QWORD *)(v20 + 16) = v23;
  sub_1BCA784(v20 + 16, v23);
  v24 = System_String__IsNullOrEmpty(this->fields.ruby, 0LL);
  v23 = 0LL;
  if ( !v24 )
  {
    IsNullOrEmpty = this->fields.ruby;
    if ( !IsNullOrEmpty )
      goto LABEL_33;
    v25 = System_String__Clone(IsNullOrEmpty, 0LL);
    v23 = v25;
    if ( v25 && (System_String_c *)v25->klass != string_TypeInfo )
      goto LABEL_34;
  }
  *(_QWORD *)(v20 + 24) = v23;
  sub_1BCA784(v20 + 24, v23);
  *(_OWORD *)(v20 + 32) = *(_OWORD *)&this->fields.mPriority;
  *(_OWORD *)(v20 + 52) = *(_OWORD *)&this->fields.phase_max;
  *(_QWORD *)(v20 + 68) = *(_QWORD *)&this->fields.flag;
  on_click_act = this->fields.on_click_act;
  if ( on_click_act )
  {
    v27 = ((__int64 (__fastcall *)(struct System_Action_MaterialEventLogListViewItem__o *, Il2CppMethodPointer))on_click_act->klass->vtable._6_Clone.method)(
            on_click_act,
            on_click_act->klass->vtable._7_GetMethodImpl.methodPtr);
    if ( v27 )
    {
      v28 = v27;
      v29 = sub_1BCA91C(v27, System_Action_MaterialEventLogListViewItem__TypeInfo);
      if ( v29 )
        goto LABEL_17;
      sub_1BCACFC(v28);
    }
  }
  v29 = 0LL;
LABEL_17:
  *(_QWORD *)(v20 + 80) = v29;
  sub_1BCA784(v20 + 80, v29);
  voiceId = this->fields.voiceId;
  *(_QWORD *)(v20 + 96) = voiceId;
  sub_1BCA784(v20 + 96, voiceId);
  *(_OWORD *)(v20 + 104) = *(_OWORD *)&this->fields.svtVoiceType;
  *(_DWORD *)(v20 + 140) = this->fields.genderType;
  commonString = this->fields.commonString;
  *(_QWORD *)(v20 + 144) = commonString;
  sub_1BCA784(v20 + 144, commonString);
  itm = this->fields.itm;
  *(_QWORD *)(v20 + 88) = itm;
  sub_1BCA784(v20 + 88, itm);
  IsNullOrEmpty = (System_String_o *)this->fields.playableLimitCountlist;
  if ( !IsNullOrEmpty )
    goto LABEL_33;
  v4 = &Method_System_Collections_Generic_List_Enumerator_int__Dispose__;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    (System_Collections_Generic_List_int__o *)IsNullOrEmpty,
    (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v47 = v46;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v47,
            (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v34 = *(System_Collections_Generic_List_int__o **)(v20 + 120);
    if ( !v34 )
      sub_1BCAA3C(0LL, v33);
    current = (unsigned int)v47.fields._current;
    items = v34->fields._items;
    v37 = Method_System_Collections_Generic_List_int__Add__;
    ++v34->fields._version;
    if ( !items )
      sub_1BCAA3C(v34, current);
    size = v34->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v34,
        current,
        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
    }
    else
    {
      v34->fields._size = size + 1;
      items->m_Items[size + 1] = current;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v47,
    (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  while ( 1 )
  {
    v39 = System_String__IsNullOrEmpty(this->fields.playLimitCountMessage, 0LL);
    v23 = 0LL;
    if ( v39 )
      break;
    IsNullOrEmpty = this->fields.playLimitCountMessage;
    if ( !IsNullOrEmpty )
      goto LABEL_33;
    v40 = System_String__Clone(IsNullOrEmpty, 0LL);
    v23 = v40;
    if ( !v40 || (System_String_c *)v40->klass == string_TypeInfo )
      break;
LABEL_34:
    v42 = (__int64 *)sub_1BCACFC(v23);
    v43 = (const MethodInfo_3312C4C **)v4;
    v4 = v42;
    if ( v44 != 1 )
    {
      System_Collections_Generic_List_Enumerator_int___Dispose(&v47, *v43);
      sub_1CB5270(v4);
    }
    v45 = *(_QWORD *)__cxa_begin_catch(v42);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_int___Dispose(&v47, *v43);
    if ( v45 )
      sub_1BCAA34(v45);
  }
  *(_QWORD *)(v20 + 128) = v23;
  sub_1BCA784(v20 + 128, v23);
  return (MaterialEventLogListViewItem_Info_o *)v20;
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