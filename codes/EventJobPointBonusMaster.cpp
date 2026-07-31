void EventJobPointBonusMaster___ctor(EventJobPointBonusMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938777 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventJobPointBonusMaster__EventJobPointBonusEntity__string___ctor__);
    byte_5938777 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    563,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_EventJobPointBonusMaster__EventJobPointBonusEntity__string___ctor__);
}


int32_t EventJobPointBonusMaster__CompareByLevel(
        EventJobPointBonusEntity_o *left,
        EventJobPointBonusEntity_o *right,
        const MethodInfo *method)
{
  int32_t v3; // w8

  v3 = ((unsigned __int64)left | (unsigned __int64)right) != 0;
  if ( left && (v3 = -1, right) )
    return System_Int32__CompareTo_76925088((_DWORD)left + 24, right->fields.lv, 0);
  else
    return v3;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *EventJobPointBonusMaster__FormatListText(
        EventJobPointBonusMaster_o *this,
        int32_t calcType,
        int32_t bonusValue,
        const MethodInfo *method)
{
  int v4; // w19
  System_String_o *v6; // x20
  Il2CppObject *v7; // x0
  EventJobPointBonusMaster_o *RoundedUpTenths; // x0
  int v10; // w20
  const MethodInfo *v11; // x2
  int32_t v12; // w0
  __int64 v13; // x1
  int v14; // w9
  System_String_o *v15; // x19
  Il2CppObject *v16; // x20
  Il2CppObject *v17; // x0
  int v18; // [xsp+4h] [xbp-2Ch] BYREF
  int v19; // [xsp+8h] [xbp-28h] BYREF
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF

  v4 = bonusValue;
  v20 = bonusValue;
  if ( (byte_5938773 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_5819/*"EVENT_INFO_POINT_EFFICACY_MULTIPLICATION"*/);
    sub_21FFC50(&StringLiteral_5128/*"D1"*/);
    this = (EventJobPointBonusMaster_o *)sub_21FFC50(&StringLiteral_5818/*"EVENT_INFO_POINT_EFFICACY_ADD"*/);
    byte_5938773 = 1;
  }
  v19 = 0;
  if ( calcType == 2 )
  {
    if ( v4 <= 0 )
      v4 = 1000;
    RoundedUpTenths = (EventJobPointBonusMaster_o *)EventJobPointBonusMaster__GetRoundedUpTenths(
                                                      this,
                                                      v4,
                                                      *(const MethodInfo **)&bonusValue);
    v10 = (int)RoundedUpTenths / 10;
    v12 = EventJobPointBonusMaster__GetRoundedUpTenths(RoundedUpTenths, v4, v11);
    v14 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
    v19 = v12 % 10;
    if ( !v14 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_5819/*"EVENT_INFO_POINT_EFFICACY_MULTIPLICATION"*/, 0);
    v18 = v10;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v18);
    v17 = (Il2CppObject *)System_Int32__ToString_76925352((int32_t)&v19, (System_String_o *)StringLiteral_5128/*"D1"*/, 0);
    return System_String__Format_75484576(v15, v16, v17, 0);
  }
  else if ( calcType == 1 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&calcType);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5818/*"EVENT_INFO_POINT_EFFICACY_ADD"*/, 0);
    v18 = v4;
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v18);
    return System_String__Format(v6, v7, 0);
  }
  else
  {
    return System_Int32__ToString((int32_t)&v20, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *EventJobPointBonusMaster__FormatSummary(
        EventJobPointBonusMaster_o *this,
        bool hasAcquiredData,
        int32_t baseEfficacySum,
        int32_t multiplierPermille,
        const MethodInfo *method)
{
  EventJobPointBonusMaster_o *v8; // x21
  const MethodInfo *v9; // x3
  Il2CppObject *v10; // x0
  int32_t SummaryTotalValue; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5938774 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_5820/*"EVENT_INFO_POINT_EFFICACY_SUM"*/);
    byte_5938774 = 1;
  }
  if ( !hasAcquiredData )
    return **(System_String_o ***)(qword_594C0B8 + 184);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, hasAcquiredData);
  v8 = (EventJobPointBonusMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5820/*"EVENT_INFO_POINT_EFFICACY_SUM"*/, 0);
  SummaryTotalValue = EventJobPointBonusMaster__GetSummaryTotalValue(v8, baseEfficacySum, multiplierPermille, v9);
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &SummaryTotalValue);
  return System_String__Format((System_String_o *)v8, v10, 0);
}


int32_t EventJobPointBonusMaster__GetDisplayDecimalPart(
        EventJobPointBonusMaster_o *this,
        int32_t multiplierPermille,
        const MethodInfo *method)
{
  return EventJobPointBonusMaster__GetRoundedUpTenths(this, multiplierPermille, method) % 10;
}


int32_t EventJobPointBonusMaster__GetDisplayIntegerPart(
        EventJobPointBonusMaster_o *this,
        int32_t multiplierPermille,
        const MethodInfo *method)
{
  return EventJobPointBonusMaster__GetRoundedUpTenths(this, multiplierPermille, method) / 10;
}


int32_t EventJobPointBonusMaster__GetDisplayMultiplierPermille(
        EventJobPointBonusMaster_o *this,
        int32_t bonusValue,
        const MethodInfo *method)
{
  if ( bonusValue <= 0 )
    return 1000;
  else
    return bonusValue;
}


// local variable allocation has failed, the output may be wrong!
EventJobPointBonusEntity_o *EventJobPointBonusMaster__GetEntity(
        EventJobPointBonusMaster_o *this,
        int32_t eventId,
        int32_t jobId,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5938778 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventJobPointBonusMaster__EventJobPointBonusEntity__string__GetEntity__);
    byte_5938778 = 1;
  }
  PK = (Il2CppObject *)EventJobPointBonusEntity__CreatePK(eventId, jobId, lv, *(const MethodInfo **)&lv);
  return (EventJobPointBonusEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_3EE2044 *)Method_DataMasterBase_EventJobPointBonusMaster__EventJobPointBonusEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventJobPointBonusEntity__o *EventJobPointBonusMaster__GetEntityListByEventIdAndJobId(
        EventJobPointBonusMaster_o *this,
        int32_t eventId,
        int32_t jobId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  System_Collections_ObjectModel_Collection_T__o *v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Comparison_T__o *v23; // x19

  if ( (byte_5938771 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventJobPointBonusEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventJobPointBonusEntity__get_Item__);
    sub_21FFC50(&System_Comparison_EventJobPointBonusEntity__TypeInfo);
    sub_21FFC50(&Method_EventJobPointBonusMaster_CompareByLevel__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventJobPointBonusEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventJobPointBonusEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventJobPointBonusEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventJobPointBonusEntity__TypeInfo);
    byte_5938771 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventJobPointBonusEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventJobPointBonusEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_EventJobPointBonusEntity__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v12,
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_EventJobPointBonusEntity__get_Item__);
      if ( list )
      {
        v8 = list;
        if ( LODWORD(list->fields.items) == eventId && HIDWORD(list->fields.items) == jobId )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v20 = Method_System_Collections_Generic_List_EventJobPointBonusEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v8;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v8, v13, v14, v15, v16, v17, v18);
          }
        }
      }
      if ( v11 == ++v12 )
        goto LABEL_16;
    }
LABEL_18:
    sub_21FFECC(list, v8);
  }
LABEL_16:
  v23 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_EventJobPointBonusEntity__TypeInfo);
  System_Comparison_object____ctor(v23, 0, Method_EventJobPointBonusMaster_CompareByLevel__, 0);
  if ( !v7 )
    goto LABEL_18;
  System_Collections_Generic_List_object___Sort_71636404(
    v7,
    v23,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_EventJobPointBonusEntity__Sort__);
  return (System_Collections_Generic_List_EventJobPointBonusEntity__o *)v7;
}


void EventJobPointBonusMaster__GetMultiplierDisplayParts(
        EventJobPointBonusMaster_o *this,
        int32_t multiplierPermille,
        int32_t *integer,
        int32_t *decimalPart,
        const MethodInfo *method)
{
  EventJobPointBonusMaster_o *RoundedUpTenths; // x0
  const MethodInfo *v9; // x2

  RoundedUpTenths = (EventJobPointBonusMaster_o *)EventJobPointBonusMaster__GetRoundedUpTenths(
                                                    this,
                                                    multiplierPermille,
                                                    (const MethodInfo *)integer);
  *integer = (int)RoundedUpTenths / 10;
  *decimalPart = EventJobPointBonusMaster__GetRoundedUpTenths(RoundedUpTenths, multiplierPermille, v9) % 10;
}


// local variable allocation has failed, the output may be wrong!
int32_t EventJobPointBonusMaster__GetRoundedUpTenths(
        EventJobPointBonusMaster_o *this,
        int32_t multiplierPermille,
        const MethodInfo *method)
{
  double v4; // d0
  int32_t v5; // w9

  if ( (byte_5938776 & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5938776 = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, *(_QWORD *)&multiplierPermille);
  v4 = (double)multiplierPermille / 100.0;
  v5 = vcvtpd_s64_f64(v4);
  if ( ceil(v4) == INFINITY )
    return 0x80000000;
  else
    return v5;
}


int32_t EventJobPointBonusMaster__GetSummaryMultiplierBonusPermille(
        EventJobPointBonusMaster_o *this,
        int32_t bonusValue,
        const MethodInfo *method)
{
  int32_t v3; // w8

  v3 = bonusValue - 1000;
  if ( (unsigned int)bonusValue < 0x3E8 )
    v3 = 0;
  if ( bonusValue <= 0 )
    return 0;
  else
    return v3;
}


// local variable allocation has failed, the output may be wrong!
int32_t EventJobPointBonusMaster__GetSummaryTotalValue(
        EventJobPointBonusMaster_o *this,
        int32_t baseEfficacySum,
        int32_t multiplierPermille,
        const MethodInfo *method)
{
  double v6; // d0
  int32_t v7; // w9

  if ( (byte_5938775 & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5938775 = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, *(_QWORD *)&baseEfficacySum);
  v6 = (double)baseEfficacySum * (double)multiplierPermille / 1000.0;
  v7 = vcvtpd_s64_f64(v6);
  if ( ceil(v6) == INFINITY )
    return 0x80000000;
  else
    return v7;
}


bool EventJobPointBonusMaster__TryGetDefaultDisplayData(
        EventJobPointBonusMaster_o *this,
        int32_t eventId,
        int32_t jobId,
        int32_t *calcType,
        int32_t *bonusValue,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *EntityListByEventIdAndJobId; // x0
  System_Collections_Generic_List_object__o *v12; // x21
  __int64 v13; // x1
  int32_t version; // w8
  int32_t v15; // w8

  if ( (byte_5938772 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventJobPointBonusEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventJobPointBonusEntity__get_Item__);
    byte_5938772 = 1;
  }
  *calcType = 0;
  *bonusValue = 0;
  EntityListByEventIdAndJobId = (System_Collections_Generic_List_object__o *)EventJobPointBonusMaster__GetEntityListByEventIdAndJobId(
                                                                               this,
                                                                               eventId,
                                                                               jobId,
                                                                               (const MethodInfo *)calcType);
  if ( EntityListByEventIdAndJobId )
  {
    v12 = EntityListByEventIdAndJobId;
    if ( EntityListByEventIdAndJobId->fields._size < 1 )
    {
      LOBYTE(EntityListByEventIdAndJobId) = 0;
    }
    else
    {
      EntityListByEventIdAndJobId = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                   EntityListByEventIdAndJobId,
                                                                                   0,
                                                                                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventJobPointBonusEntity__get_Item__);
      if ( EntityListByEventIdAndJobId )
      {
        EntityListByEventIdAndJobId = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                     v12,
                                                                                     0,
                                                                                     (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventJobPointBonusEntity__get_Item__);
        if ( !EntityListByEventIdAndJobId )
          sub_21FFECC(0, v13);
        version = EntityListByEventIdAndJobId->fields._version;
        LOBYTE(EntityListByEventIdAndJobId) = 1;
        *calcType = version;
        if ( version == 2 )
          v15 = 1000;
        else
          v15 = 0;
        *bonusValue = v15;
      }
    }
  }
  return (char)EntityListByEventIdAndJobId;
}


// local variable allocation has failed, the output may be wrong!
bool EventJobPointBonusMaster__TryGetEntity(
        EventJobPointBonusMaster_o *this,
        EventJobPointBonusEntity_o **entity,
        int32_t eventId,
        int32_t jobId,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5938779 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventJobPointBonusMaster__EventJobPointBonusEntity__string__TryGetEntity__);
    byte_5938779 = 1;
  }
  PK = (Il2CppObject *)EventJobPointBonusEntity__CreatePK(eventId, jobId, lv, *(const MethodInfo **)&jobId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_EventJobPointBonusMaster__EventJobPointBonusEntity__string__TryGetEntity__);
}