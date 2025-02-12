void __fastcall RecommendSupportMessageSelectListViewItem___ctor(
        RecommendSupportMessageSelectListViewItem_o *this,
        int32_t index,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  __int64 v12; // x0
  const MethodInfo *v13; // x1
  struct RecommendAdviceMessageEntity_o *RecommendAdviceMessageEntity_k__BackingField; // x8

  ListViewItem___ctor_41884928((ListViewItem_o *)this, index, 0LL);
  this->fields._RecommendAdviceMessageEntity_k__BackingField = entity;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._RecommendAdviceMessageEntity_k__BackingField,
    (int64_t)entity,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  RecommendAdviceMessageEntity_k__BackingField = this->fields._RecommendAdviceMessageEntity_k__BackingField;
  if ( !RecommendAdviceMessageEntity_k__BackingField )
    sub_1C13F80(v12, v13);
  this->fields._Category_k__BackingField = RecommendAdviceMessageEntity_k__BackingField->fields.category;
  RecommendSupportMessageSelectListViewItem__UpdateProperties(this, v13);
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
    sub_1C13F80(this, sort);
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

  if ( (byte_4BB0819 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Contains_int___, method);
    sub_1C13D24(&Method_RecommendSupportSelectControl_GetDialog_RecommendSupportMessageSelectDialog___, v3);
    sub_1C13D24(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v4);
    byte_4BB0819 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (Instance = RecommendSupportSelectControl__GetDialog_object_(
                     (RecommendSupportSelectControl_o *)Instance,
                     (const MethodInfo_3021B18 *)Method_RecommendSupportSelectControl_GetDialog_RecommendSupportMessageSelectDialog___)) == 0LL
    || (RecommendAdviceMessageEntity_k__BackingField = this->fields._RecommendAdviceMessageEntity_k__BackingField) == 0LL )
  {
    sub_1C13F80(Instance, v6);
  }
  this->fields._IsUse_k__BackingField = System_Linq_Enumerable__Contains_int_(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)Instance[12].monitor,
                                          RecommendAdviceMessageEntity_k__BackingField->fields.id,
                                          (const MethodInfo_2FA7350 *)Method_System_Linq_Enumerable_Contains_int___);
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
    sub_1C13F80(this, method);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._RecommendAdviceMessageEntity_k__BackingField = value;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._RecommendAdviceMessageEntity_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}