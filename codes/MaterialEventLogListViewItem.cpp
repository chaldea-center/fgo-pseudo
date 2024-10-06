void __fastcall MaterialEventLogListViewItem___ctor(MaterialEventLogListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
}


void __fastcall MaterialEventLogListViewItem___ctor_31235700(
        MaterialEventLogListViewItem_o *this,
        int32_t index,
        int32_t kind,
        MaterialEventLogListViewItem_Info_o *info,
        const MethodInfo *method)
{
  MaterialEventLogListViewItem_o *v7; // x21

  v7 = this;
  ListViewItem___ctor_40760684((ListViewItem_o *)this, index, 0LL);
  v7->fields._info_k__BackingField = info;
  v7 = (MaterialEventLogListViewItem_o *)((char *)v7 + 120);
  LODWORD(v7[-1].fields._info_k__BackingField) = kind;
  sub_1B8FFB4(v7);
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
  if ( (byte_4A6B5A3 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_VoiceMaterialCondMaster___, *(_QWORD *)&limitCount);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v5);
    this = (MaterialEventLogListViewItem_o *)sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A6B5A3 = 1;
  }
  info_k__BackingField = v4->fields._info_k__BackingField;
  if ( !info_k__BackingField )
    goto LABEL_14;
  voiceId = info_k__BackingField->fields.voiceId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46542220(voiceId, 0LL);
  if ( System_String__IsNullOrEmpty(v9, 0LL) )
    return 1;
  this = (MaterialEventLogListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  this = (MaterialEventLogListViewItem_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_VoiceMaterialCondMaster___);
  v11 = v4->fields._info_k__BackingField;
  if ( !v11 )
    goto LABEL_14;
  v12 = (VoiceMaterialCondMaster_o *)this;
  svtVoiceId = v11->fields.svtVoiceId;
  voicePrefix = v11->fields.voicePrefix;
  v15 = v11->fields.voiceId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  this = (MaterialEventLogListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46542220(
                                             v15,
                                             0LL);
  if ( !v12 )
LABEL_14:
    sub_1B9026C(this, *(_QWORD *)&limitCount);
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
  System_Collections_Generic_List_T__o *ClassGroupFilterKindList; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x8
  struct MaterialEventLogListViewItem_Info_o *v12; // x8
  FilterKindList_c *v13; // x0
  System_Collections_Generic_List_T__o *RarityFilterKindList; // x8
  ListViewSort_FilterKind_array *v15; // x21
  ListViewSort_FilterKind_array *v16; // x0
  struct MaterialEventLogListViewItem_Info_o *v17; // x8

  if ( (byte_4A6B5A5 & 1) == 0 )
  {
    sub_1B90010(&FilterKindList_TypeInfo, sort);
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v5);
    byte_4A6B5A5 = 1;
  }
  if ( !sort )
    return 0;
  v6 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v6 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v6->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_27;
  v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          ClassGroupFilterKindList,
                                          (const MethodInfo_34F7C80 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)ListViewSort__IsUnSelectedAllTargetFilters(
                                                                       sort,
                                                                       v8,
                                                                       0LL);
  if ( ((unsigned __int8)ClassGroupFilterKindList & 1) != 0 )
  {
    v9 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v9 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v9->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_27;
    v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             ClassGroupFilterKindList,
                                             (const MethodInfo_34F7C80 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)ListViewSort__IsUnSelectedAllTargetFilters(
                                                                         sort,
                                                                         v10,
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
    v12 = this->fields._info_k__BackingField;
    if ( !v12 )
      goto LABEL_27;
    if ( !ListViewSort__IsMatchClassGroupFilter(sort, v12->fields.servantEntity, 0LL) )
      return 0;
  }
  v13 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v13 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v13->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_27;
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                       ClassGroupFilterKindList,
                                                                       (const MethodInfo_34F7C80 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  RarityFilterKindList = (System_Collections_Generic_List_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_27;
  v15 = (ListViewSort_FilterKind_array *)ClassGroupFilterKindList;
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           RarityFilterKindList,
                                           (const MethodInfo_34F7C80 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL) )
    return 1;
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)ListViewSort__IsSelectedAllTargetFilters(
                                                                       sort,
                                                                       v15,
                                                                       0LL);
  if ( ((unsigned __int8)ClassGroupFilterKindList & 1) != 0 )
    return 1;
  v17 = this->fields._info_k__BackingField;
  if ( !v17 )
LABEL_27:
    sub_1B9026C(ClassGroupFilterKindList, sort);
  return ListViewSort__IsMatchRarityFilter(sort, v17->fields.rarity, 0LL);
}


bool __fastcall MaterialEventLogListViewItem__SetSortValue(
        MaterialEventLogListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  MaterialEventLogListViewItem_c *klass; // x8
  char v6; // w20
  int64_t index; // x8
  struct System_String_o **p_sortStr1; // x19

  if ( (byte_4A6B5A4 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_1/*""*/, sort);
    byte_4A6B5A4 = 1;
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
    this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
    p_sortStr1 = &this->fields.sortStr1;
    sub_1B8FFB4(p_sortStr1);
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
    sub_1B9026C(this, method);
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
  sub_1B8FFB4(&this->fields._info_k__BackingField);
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

  if ( (byte_4A6B5A7 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_1B90010(&System_Collections_Generic_List_int__TypeInfo, v3);
    byte_4A6B5A7 = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_1B9025C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_34F3148 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.playableLimitCountlist = v4;
  sub_1B8FFB4(&this->fields.playableLimitCountlist);
  this->fields.genderType = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


MaterialEventLogListViewItem_Info_o *__fastcall MaterialEventLogListViewItem_Info__Clone(
        MaterialEventLogListViewItem_Info_o *this,
        const MethodInfo *method)
{
  __int64 *v2; // x21
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  const MethodInfo *v12; // x1
  System_String_o *IsNullOrEmpty; // x0
  Il2CppObject *v14; // x1
  bool v15; // w0
  Il2CppObject *v16; // x0
  struct System_Action_MaterialEventLogListViewItem__o *on_click_act; // x0
  __int64 v18; // x0
  __int64 v19; // x21
  __int64 v20; // x1
  __int64 v21; // x1
  System_Collections_Generic_List_int__o *v22; // x0
  __int64 current; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  bool v27; // w0
  Il2CppObject *v28; // x0
  __int64 *v30; // x0
  const MethodInfo_3286080 **v31; // x23
  int v32; // w1
  __int64 v33; // x22
  System_Collections_Generic_List_Enumerator_int__o v34; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v35; // [xsp+20h] [xbp-50h] BYREF

  v2 = &qword_4A6B000;
  if ( (byte_4A6B5A6 & 1) == 0 )
  {
    sub_1B90010(&System_Action_MaterialEventLogListViewItem__TypeInfo, method);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v4);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v6);
    sub_1B90010(&MaterialEventLogListViewItem_Info_TypeInfo, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_int__GetEnumerator__, v9);
    sub_1B90010(&string_TypeInfo, v10);
    byte_4A6B5A6 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  v11 = sub_1B9025C(MaterialEventLogListViewItem_Info_TypeInfo);
  MaterialEventLogListViewItem_Info___ctor((MaterialEventLogListViewItem_Info_o *)v11, v12);
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(this->fields.str, 0LL);
  v14 = 0LL;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    IsNullOrEmpty = this->fields.str;
    if ( !IsNullOrEmpty )
      goto LABEL_33;
    IsNullOrEmpty = (System_String_o *)System_String__Clone(IsNullOrEmpty, 0LL);
    v14 = (Il2CppObject *)IsNullOrEmpty;
    if ( IsNullOrEmpty && IsNullOrEmpty->klass != string_TypeInfo )
      goto LABEL_34;
  }
  if ( !v11 )
LABEL_33:
    sub_1B9026C(IsNullOrEmpty, v14);
  *(_QWORD *)(v11 + 16) = v14;
  sub_1B8FFB4(v11 + 16);
  v15 = System_String__IsNullOrEmpty(this->fields.ruby, 0LL);
  v14 = 0LL;
  if ( !v15 )
  {
    IsNullOrEmpty = this->fields.ruby;
    if ( !IsNullOrEmpty )
      goto LABEL_33;
    v16 = System_String__Clone(IsNullOrEmpty, 0LL);
    v14 = v16;
    if ( v16 && (System_String_c *)v16->klass != string_TypeInfo )
      goto LABEL_34;
  }
  *(_QWORD *)(v11 + 24) = v14;
  sub_1B8FFB4(v11 + 24);
  *(_OWORD *)(v11 + 32) = *(_OWORD *)&this->fields.mPriority;
  *(_OWORD *)(v11 + 52) = *(_OWORD *)&this->fields.phase_max;
  *(_QWORD *)(v11 + 68) = *(_QWORD *)&this->fields.flag;
  on_click_act = this->fields.on_click_act;
  if ( on_click_act )
  {
    v18 = ((__int64 (__fastcall *)(struct System_Action_MaterialEventLogListViewItem__o *, Il2CppMethodPointer))on_click_act->klass->vtable._6_Clone.method)(
            on_click_act,
            on_click_act->klass->vtable._7_GetMethodImpl.methodPtr);
    if ( v18 )
    {
      v19 = v18;
      v20 = sub_1B9014C(v18, System_Action_MaterialEventLogListViewItem__TypeInfo);
      if ( v20 )
        goto LABEL_17;
      sub_1B9052C(v19);
    }
  }
  v20 = 0LL;
LABEL_17:
  *(_QWORD *)(v11 + 80) = v20;
  sub_1B8FFB4(v11 + 80);
  *(_QWORD *)(v11 + 96) = this->fields.voiceId;
  sub_1B8FFB4(v11 + 96);
  *(_OWORD *)(v11 + 104) = *(_OWORD *)&this->fields.svtVoiceType;
  *(_DWORD *)(v11 + 140) = this->fields.genderType;
  *(_QWORD *)(v11 + 144) = this->fields.commonString;
  sub_1B8FFB4(v11 + 144);
  *(_QWORD *)(v11 + 88) = this->fields.itm;
  sub_1B8FFB4(v11 + 88);
  IsNullOrEmpty = (System_String_o *)this->fields.playableLimitCountlist;
  if ( !IsNullOrEmpty )
    goto LABEL_33;
  v2 = &Method_System_Collections_Generic_List_Enumerator_int__Dispose__;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    (System_Collections_Generic_List_int__o *)IsNullOrEmpty,
    (const MethodInfo_34F4470 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v35 = v34;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v35,
            (const MethodInfo_3286084 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v22 = *(System_Collections_Generic_List_int__o **)(v11 + 120);
    if ( !v22 )
      sub_1B9026C(0LL, v21);
    current = (unsigned int)v35.fields._current;
    items = v22->fields._items;
    v25 = Method_System_Collections_Generic_List_int__Add__;
    ++v22->fields._version;
    if ( !items )
      sub_1B9026C(v22, current);
    size = v22->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v22,
        current,
        *(const MethodInfo_34F399C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v22->fields._size = size + 1;
      items->m_Items[size + 1] = current;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v35,
    (const MethodInfo_3286080 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  while ( 1 )
  {
    v27 = System_String__IsNullOrEmpty(this->fields.playLimitCountMessage, 0LL);
    v14 = 0LL;
    if ( v27 )
      break;
    IsNullOrEmpty = this->fields.playLimitCountMessage;
    if ( !IsNullOrEmpty )
      goto LABEL_33;
    v28 = System_String__Clone(IsNullOrEmpty, 0LL);
    v14 = v28;
    if ( !v28 || (System_String_c *)v28->klass == string_TypeInfo )
      break;
LABEL_34:
    v30 = (__int64 *)sub_1B9052C(v14);
    v31 = (const MethodInfo_3286080 **)v2;
    v2 = v30;
    if ( v32 != 1 )
    {
      System_Collections_Generic_List_Enumerator_int___Dispose(&v35, *v31);
      sub_1C7AAA0(v2);
    }
    v33 = *(_QWORD *)__cxa_begin_catch(v30);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_int___Dispose(&v35, *v31);
    if ( v33 )
      sub_1B90264(v33);
  }
  *(_QWORD *)(v11 + 128) = v14;
  sub_1B8FFB4(v11 + 128);
  return (MaterialEventLogListViewItem_Info_o *)v11;
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