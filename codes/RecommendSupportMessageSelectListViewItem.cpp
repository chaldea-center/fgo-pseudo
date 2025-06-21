void __fastcall RecommendSupportMessageSelectListViewItem___ctor(
        RecommendSupportMessageSelectListViewItem_o *this,
        int32_t index,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  const MethodInfo *v9; // x1
  struct RecommendAdviceMessageEntity_o *RecommendAdviceMessageEntity_k__BackingField; // x8

  ListViewItem___ctor_42932312((ListViewItem_o *)this, index, 0LL);
  this->fields._RecommendAdviceMessageEntity_k__BackingField = entity;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._RecommendAdviceMessageEntity_k__BackingField,
    (int32_t)entity,
    v6,
    v7);
  RecommendAdviceMessageEntity_k__BackingField = this->fields._RecommendAdviceMessageEntity_k__BackingField;
  if ( !RecommendAdviceMessageEntity_k__BackingField )
    sub_1BCB254(v8, v9);
  this->fields._Category_k__BackingField = RecommendAdviceMessageEntity_k__BackingField->fields.category;
  RecommendSupportMessageSelectListViewItem__UpdateProperties(this, v9);
}


bool __fastcall RecommendSupportMessageSelectListViewItem__SetSortValue(
        RecommendSupportMessageSelectListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  struct RecommendAdviceMessageEntity_o *RecommendAdviceMessageEntity_k__BackingField; // x9
  bool result; // w0

  RecommendAdviceMessageEntity_k__BackingField = this->fields._RecommendAdviceMessageEntity_k__BackingField;
  if ( !RecommendAdviceMessageEntity_k__BackingField )
    sub_1BCB254(this, sort);
  result = 1;
  this->fields.sortValue1 = RecommendAdviceMessageEntity_k__BackingField->fields.priority;
  return result;
}


void __fastcall RecommendSupportMessageSelectListViewItem__UpdateProperties(
        RecommendSupportMessageSelectListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct RecommendAdviceMessageEntity_o *RecommendAdviceMessageEntity_k__BackingField; // x8

  if ( (byte_4B18476 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Contains_int___, method);
    sub_1BCAFF8(&Method_RecommendSupportSelectControl_GetDialog_RecommendSupportMessageSelectDialog___, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v4);
    byte_4B18476 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (Instance = RecommendSupportSelectControl__GetDialog_object_(
                     (RecommendSupportSelectControl_o *)Instance,
                     (const MethodInfo_30B0D20 *)Method_RecommendSupportSelectControl_GetDialog_RecommendSupportMessageSelectDialog___)) == 0LL
    || (RecommendAdviceMessageEntity_k__BackingField = this->fields._RecommendAdviceMessageEntity_k__BackingField) == 0LL )
  {
    sub_1BCB254(Instance, v6);
  }
  this->fields._IsUse_k__BackingField = System_Linq_Enumerable__Contains_int_(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)Instance[13].klass,
                                          RecommendAdviceMessageEntity_k__BackingField->fields.id,
                                          (const MethodInfo_3033A7C *)Method_System_Linq_Enumerable_Contains_int___);
}


int32_t __fastcall RecommendSupportMessageSelectListViewItem__get_Category(
        RecommendSupportMessageSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Category_k__BackingField;
}


bool __fastcall RecommendSupportMessageSelectListViewItem__get_IsUse(
        RecommendSupportMessageSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsUse_k__BackingField;
}


int32_t __fastcall RecommendSupportMessageSelectListViewItem__get_ObjectId(
        RecommendSupportMessageSelectListViewItem_o *this,
        const MethodInfo *method)
{
  struct RecommendAdviceMessageEntity_o *RecommendAdviceMessageEntity_k__BackingField; // x8

  RecommendAdviceMessageEntity_k__BackingField = this->fields._RecommendAdviceMessageEntity_k__BackingField;
  if ( !RecommendAdviceMessageEntity_k__BackingField )
    sub_1BCB254(this, method);
  return RecommendAdviceMessageEntity_k__BackingField->fields.id;
}


RecommendAdviceMessageEntity_o *__fastcall RecommendSupportMessageSelectListViewItem__get_RecommendAdviceMessageEntity(
        RecommendSupportMessageSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._RecommendAdviceMessageEntity_k__BackingField;
}


void __fastcall RecommendSupportMessageSelectListViewItem__set_Category(
        RecommendSupportMessageSelectListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Category_k__BackingField = value;
}


void __fastcall RecommendSupportMessageSelectListViewItem__set_IsUse(
        RecommendSupportMessageSelectListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsUse_k__BackingField = value;
}


void __fastcall RecommendSupportMessageSelectListViewItem__set_RecommendAdviceMessageEntity(
        RecommendSupportMessageSelectListViewItem_o *this,
        RecommendAdviceMessageEntity_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._RecommendAdviceMessageEntity_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._RecommendAdviceMessageEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}