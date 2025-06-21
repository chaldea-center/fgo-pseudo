void __fastcall MaterialEventLogListViewItem___ctor(MaterialEventLogListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
}


void __fastcall MaterialEventLogListViewItem___ctor_32591256(
        MaterialEventLogListViewItem_o *this,
        int32_t index,
        int32_t kind,
        MaterialEventLogListViewItem_Info_o *info,
        const MethodInfo *method)
{
  MaterialEventLogListViewItem_o *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  v7 = this;
  ListViewItem___ctor_42932312((ListViewItem_o *)this, index, 0LL);
  v7->fields._info_k__BackingField = info;
  v7 = (MaterialEventLogListViewItem_o *)((char *)v7 + 120);
  LODWORD(v7[-1].fields._info_k__BackingField) = kind;
  sub_1BCAF9C((CGThumbnailListItem_o *)v7, (int32_t)info, v8, v9);
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
  if ( (byte_4B177D6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_VoiceMaterialCondMaster___, *(_QWORD *)&limitCount);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v5);
    this = (MaterialEventLogListViewItem_o *)sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B177D6 = 1;
  }
  info_k__BackingField = v4->fields._info_k__BackingField;
  if ( !info_k__BackingField )
    goto LABEL_14;
  voiceId = info_k__BackingField->fields.voiceId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48161020(voiceId, 0LL);
  if ( System_String__IsNullOrEmpty(v9, 0LL) )
    return 1;
  this = (MaterialEventLogListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  this = (MaterialEventLogListViewItem_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_VoiceMaterialCondMaster___);
  v11 = v4->fields._info_k__BackingField;
  if ( !v11 )
    goto LABEL_14;
  v12 = (VoiceMaterialCondMaster_o *)this;
  svtVoiceId = v11->fields.svtVoiceId;
  voicePrefix = v11->fields.voicePrefix;
  v15 = v11->fields.voiceId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  this = (MaterialEventLogListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48161020(
                                             v15,
                                             0LL);
  if ( !v12 )
LABEL_14:
    sub_1BCB254(this, *(_QWORD *)&limitCount);
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

  if ( (byte_4B177D8 & 1) == 0 )
  {
    sub_1BCAFF8(&FilterKindList_TypeInfo, sort);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v5);
    byte_4B177D8 = 1;
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
                                          (const MethodInfo_36A0E90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                             (const MethodInfo_36A0E90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                                                       (const MethodInfo_36A0E90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  RarityFilterKindList = (System_Collections_Generic_List_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_27;
  v15 = (ListViewSort_FilterKind_array *)ClassGroupFilterKindList;
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           RarityFilterKindList,
                                           (const MethodInfo_36A0E90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    sub_1BCB254(ClassGroupFilterKindList, sort);
  return ListViewSort__IsMatchRarityFilter(sort, v17->fields.rarity, 0LL);
}


bool __fastcall MaterialEventLogListViewItem__SetSortValue(
        MaterialEventLogListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  MaterialEventLogListViewItem_c *klass; // x8
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  char v8; // w20
  int64_t index; // x8
  int32_t v10; // w1
  struct System_String_o **p_sortStr1; // x19

  if ( (byte_4B177D7 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_1/*""*/, sort);
    byte_4B177D7 = 1;
  }
  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  v8 = ((__int64 (__fastcall *)(MaterialEventLogListViewItem_o *, ListViewSort_o *, void *))klass->vtable._5_IsMatchFilter.method)(
         this,
         sort,
         klass[1]._1.image);
  if ( (v8 & 1) != 0 )
  {
    index = this->fields.index;
    this->fields.sortValue0 = 0LL;
    this->fields.sortValue0B = 0LL;
    this->fields.sortValue1 = index;
    v10 = (int)StringLiteral_1/*""*/;
    this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
    p_sortStr1 = &this->fields.sortStr1;
    sub_1BCAF9C((CGThumbnailListItem_o *)p_sortStr1, v10, v6, v7);
    p_sortStr1[1] = 0LL;
    p_sortStr1[2] = 0LL;
    *((_WORD *)p_sortStr1 + 16) = 0;
    p_sortStr1[3] = 0LL;
  }
  return v8 & 1;
}


int32_t __fastcall MaterialEventLogListViewItem__get_genderType(
        MaterialEventLogListViewItem_o *this,
        const MethodInfo *method)
{
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x8

  info_k__BackingField = this->fields._info_k__BackingField;
  if ( !info_k__BackingField )
    sub_1BCB254(this, method);
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
  const MethodInfo *v3; // x3

  this->fields._info_k__BackingField = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._info_k__BackingField, (int32_t)value, (int32_t)method, v3);
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
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B177DA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v3);
    byte_4B177DA = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.playableLimitCountlist = v4;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.playableLimitCountlist, (int32_t)v4, v5, v6);
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
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *v16; // x1
  bool v17; // w0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Action_MaterialEventLogListViewItem__o *on_click_act; // x0
  __int64 v24; // x0
  __int64 v25; // x21
  __int64 v26; // x1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_String_o *commonString; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct MaterialEventLogListViewItem_o *itm; // x1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  __int64 v36; // x1
  System_Collections_Generic_List_int__o *v37; // x0
  __int64 current; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  bool v42; // w0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  Il2CppObject *v45; // x0
  __int64 *v47; // x0
  const MethodInfo_344B700 **v48; // x23
  int v49; // w1
  __int64 v50; // x22
  System_Collections_Generic_List_Enumerator_int__o v51; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v52; // [xsp+20h] [xbp-50h] BYREF

  v2 = &qword_4B17000;
  if ( (byte_4B177D9 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_MaterialEventLogListViewItem__TypeInfo, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v6);
    sub_1BCAFF8(&MaterialEventLogListViewItem_Info_TypeInfo, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v9);
    sub_1BCAFF8(&string_TypeInfo, v10);
    byte_4B177D9 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  v11 = sub_1BCB244(MaterialEventLogListViewItem_Info_TypeInfo);
  MaterialEventLogListViewItem_Info___ctor((MaterialEventLogListViewItem_Info_o *)v11, v12);
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(this->fields.str, 0LL);
  v16 = 0LL;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    IsNullOrEmpty = this->fields.str;
    if ( !IsNullOrEmpty )
      goto LABEL_33;
    IsNullOrEmpty = (System_String_o *)System_String__Clone(IsNullOrEmpty, 0LL);
    v16 = (Il2CppObject *)IsNullOrEmpty;
    if ( IsNullOrEmpty && IsNullOrEmpty->klass != string_TypeInfo )
      goto LABEL_34;
  }
  if ( !v11 )
LABEL_33:
    sub_1BCB254(IsNullOrEmpty, v16);
  *(_QWORD *)(v11 + 16) = v16;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)v16, v14, v15);
  v17 = System_String__IsNullOrEmpty(this->fields.ruby, 0LL);
  v16 = 0LL;
  if ( !v17 )
  {
    IsNullOrEmpty = this->fields.ruby;
    if ( !IsNullOrEmpty )
      goto LABEL_33;
    v20 = System_String__Clone(IsNullOrEmpty, 0LL);
    v16 = v20;
    if ( v20 && (System_String_c *)v20->klass != string_TypeInfo )
      goto LABEL_34;
  }
  *(_QWORD *)(v11 + 24) = v16;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v11 + 24), (int32_t)v16, v18, v19);
  *(_OWORD *)(v11 + 32) = *(_OWORD *)&this->fields.mPriority;
  *(_OWORD *)(v11 + 52) = *(_OWORD *)&this->fields.phase_max;
  *(_QWORD *)(v11 + 68) = *(_QWORD *)&this->fields.flag;
  on_click_act = this->fields.on_click_act;
  if ( on_click_act )
  {
    v24 = ((__int64 (__fastcall *)(struct System_Action_MaterialEventLogListViewItem__o *, Il2CppMethodPointer))on_click_act->klass->vtable._6_Clone.method)(
            on_click_act,
            on_click_act->klass->vtable._7_GetMethodImpl.methodPtr);
    if ( v24 )
    {
      v25 = v24;
      v26 = sub_1BCB134(v24, System_Action_MaterialEventLogListViewItem__TypeInfo);
      if ( v26 )
        goto LABEL_17;
      sub_1BCB514(v25);
    }
  }
  v26 = 0LL;
LABEL_17:
  *(_QWORD *)(v11 + 80) = v26;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v11 + 80), v26, v21, v22);
  voiceId = this->fields.voiceId;
  *(_QWORD *)(v11 + 96) = voiceId;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v11 + 96), (int32_t)voiceId, v28, v29);
  *(_OWORD *)(v11 + 104) = *(_OWORD *)&this->fields.svtVoiceType;
  *(_DWORD *)(v11 + 140) = this->fields.genderType;
  commonString = this->fields.commonString;
  *(_QWORD *)(v11 + 144) = commonString;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v11 + 144), (int32_t)commonString, v31, v32);
  itm = this->fields.itm;
  *(_QWORD *)(v11 + 88) = itm;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v11 + 88), (int32_t)itm, v34, v35);
  *(_BYTE *)(v11 + 208) = this->fields.isEmptyGalleryFolder;
  *(_BYTE *)(v11 + 209) = this->fields.isGallery;
  IsNullOrEmpty = (System_String_o *)this->fields.playableLimitCountlist;
  if ( !IsNullOrEmpty )
    goto LABEL_33;
  v2 = &Method_System_Collections_Generic_List_Enumerator_int__Dispose__;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v51,
    (System_Collections_Generic_List_int__o *)IsNullOrEmpty,
    (const MethodInfo_369D680 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v52 = v51;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v52,
            (const MethodInfo_344B704 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v37 = *(System_Collections_Generic_List_int__o **)(v11 + 120);
    if ( !v37 )
      sub_1BCB254(0LL, v36);
    current = (unsigned int)v52.fields._current;
    items = v37->fields._items;
    v40 = Method_System_Collections_Generic_List_int__Add__;
    ++v37->fields._version;
    if ( !items )
      sub_1BCB254(v37, current);
    size = v37->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v37,
        current,
        *(const MethodInfo_369CBAC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
    }
    else
    {
      v37->fields._size = size + 1;
      items->m_Items[size + 1] = current;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v52,
    (const MethodInfo_344B700 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  while ( 1 )
  {
    v42 = System_String__IsNullOrEmpty(this->fields.playLimitCountMessage, 0LL);
    v16 = 0LL;
    if ( v42 )
      break;
    IsNullOrEmpty = this->fields.playLimitCountMessage;
    if ( !IsNullOrEmpty )
      goto LABEL_33;
    v45 = System_String__Clone(IsNullOrEmpty, 0LL);
    v16 = v45;
    if ( !v45 || (System_String_c *)v45->klass == string_TypeInfo )
      break;
LABEL_34:
    v47 = (__int64 *)sub_1BCB514(v16);
    v48 = (const MethodInfo_344B700 **)v2;
    v2 = v47;
    if ( v49 != 1 )
    {
      System_Collections_Generic_List_Enumerator_int___Dispose(&v52, *v48);
      sub_1CB3D40(v2);
    }
    v50 = *(_QWORD *)__cxa_begin_catch(v47);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_int___Dispose(&v52, *v48);
    if ( v50 )
      sub_1BCB24C(v50);
  }
  *(_QWORD *)(v11 + 128) = v16;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v11 + 128), (int32_t)v16, v43, v44);
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