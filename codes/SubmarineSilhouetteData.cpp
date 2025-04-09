void __fastcall SubmarineSilhouetteData___ctor(
        SubmarineSilhouetteData_o *this,
        SubmarineSpotInfo_o *spotInfo,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct SpotEntity_o *SpotEntity_k__BackingField; // x8
  struct EventPanelSpotEntity_o *EventPanelSpotEntity_k__BackingField; // x8
  struct System_Int32_array *objectQuestIds; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct EventPanelSpotEntity_o *v14; // x8
  struct System_Int32_array_array *enemySizeIdxListJson; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !spotInfo )
    goto LABEL_6;
  SpotEntity_k__BackingField = spotInfo->fields._SpotEntity_k__BackingField;
  if ( !SpotEntity_k__BackingField )
    goto LABEL_6;
  this->fields._SpotId_k__BackingField = SpotEntity_k__BackingField->fields.id;
  this->fields._PanelId_k__BackingField = spotInfo->fields._PanelId_k__BackingField;
  EventPanelSpotEntity_k__BackingField = spotInfo->fields._EventPanelSpotEntity_k__BackingField;
  if ( !EventPanelSpotEntity_k__BackingField
    || (this->fields._ObjectId_k__BackingField = EventPanelSpotEntity_k__BackingField->fields.objectId,
        objectQuestIds = EventPanelSpotEntity_k__BackingField->fields.objectQuestIds,
        this->fields._ObjectQuestIds_k__BackingField = objectQuestIds,
        sub_1B4CF34(
          (CGThumbnailListItem_o *)&this->fields._ObjectQuestIds_k__BackingField,
          (int32_t)objectQuestIds,
          v7,
          v8),
        (v14 = spotInfo->fields._EventPanelSpotEntity_k__BackingField) == 0LL) )
  {
LABEL_6:
    sub_1B4D1EC(v5, v6);
  }
  enemySizeIdxListJson = v14->fields.enemySizeIdxListJson;
  this->fields._EnemySizeIdx_k__BackingField = enemySizeIdxListJson;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields._EnemySizeIdx_k__BackingField,
    (int32_t)enemySizeIdxListJson,
    v12,
    v13);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SubmarineSilhouetteData__HasClearCondQuestId(
        SubmarineSilhouetteData_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  struct System_Int32_array *ObjectQuestIds_k__BackingField; // x0

  if ( (byte_49B799F & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Array_IndexOf_int___, *(_QWORD *)&questId);
    byte_49B799F = 1;
  }
  ObjectQuestIds_k__BackingField = this->fields._ObjectQuestIds_k__BackingField;
  if ( ObjectQuestIds_k__BackingField )
  {
    if ( ObjectQuestIds_k__BackingField->max_length )
      LOBYTE(ObjectQuestIds_k__BackingField) = System_Array__IndexOf_int_(
                                                 ObjectQuestIds_k__BackingField,
                                                 questId,
                                                 (const MethodInfo_2FFB2B4 *)Method_System_Array_IndexOf_int___) >= 0;
    else
      LOBYTE(ObjectQuestIds_k__BackingField) = 0;
  }
  return (char)ObjectQuestIds_k__BackingField;
}


bool __fastcall SubmarineSilhouetteData__get_Alive(SubmarineSilhouetteData_o *this, const MethodInfo *method)
{
  return this->fields._Alive_k__BackingField;
}


System_Int32_array_array *__fastcall SubmarineSilhouetteData__get_EnemySizeIdx(
        SubmarineSilhouetteData_o *this,
        const MethodInfo *method)
{
  return this->fields._EnemySizeIdx_k__BackingField;
}


bool __fastcall SubmarineSilhouetteData__get_HasEnemySize(SubmarineSilhouetteData_o *this, const MethodInfo *method)
{
  struct System_Int32_array_array *EnemySizeIdx_k__BackingField; // x8

  EnemySizeIdx_k__BackingField = this->fields._EnemySizeIdx_k__BackingField;
  return EnemySizeIdx_k__BackingField && EnemySizeIdx_k__BackingField->max_length != 0;
}


bool __fastcall SubmarineSilhouetteData__get_HasObjectQuestIds(
        SubmarineSilhouetteData_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *ObjectQuestIds_k__BackingField; // x8

  ObjectQuestIds_k__BackingField = this->fields._ObjectQuestIds_k__BackingField;
  return ObjectQuestIds_k__BackingField && ObjectQuestIds_k__BackingField->max_length != 0;
}


bool __fastcall SubmarineSilhouetteData__get_IsOnPanel(SubmarineSilhouetteData_o *this, const MethodInfo *method)
{
  return this->fields._PanelId_k__BackingField > 0;
}


int32_t __fastcall SubmarineSilhouetteData__get_ObjectId(SubmarineSilhouetteData_o *this, const MethodInfo *method)
{
  return this->fields._ObjectId_k__BackingField;
}


System_Int32_array *__fastcall SubmarineSilhouetteData__get_ObjectQuestIds(
        SubmarineSilhouetteData_o *this,
        const MethodInfo *method)
{
  return this->fields._ObjectQuestIds_k__BackingField;
}


int32_t __fastcall SubmarineSilhouetteData__get_PanelId(SubmarineSilhouetteData_o *this, const MethodInfo *method)
{
  return this->fields._PanelId_k__BackingField;
}


int32_t __fastcall SubmarineSilhouetteData__get_SpotId(SubmarineSilhouetteData_o *this, const MethodInfo *method)
{
  return this->fields._SpotId_k__BackingField;
}


void __fastcall SubmarineSilhouetteData__set_Alive(
        SubmarineSilhouetteData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._Alive_k__BackingField = value;
}


void __fastcall SubmarineSilhouetteData__set_EnemySizeIdx(
        SubmarineSilhouetteData_o *this,
        System_Int32_array_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._EnemySizeIdx_k__BackingField = value;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._EnemySizeIdx_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall SubmarineSilhouetteData__set_ObjectId(
        SubmarineSilhouetteData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ObjectId_k__BackingField = value;
}


void __fastcall SubmarineSilhouetteData__set_ObjectQuestIds(
        SubmarineSilhouetteData_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ObjectQuestIds_k__BackingField = value;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields._ObjectQuestIds_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineSilhouetteData__set_PanelId(
        SubmarineSilhouetteData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._PanelId_k__BackingField = value;
}


void __fastcall SubmarineSilhouetteData__set_SpotId(
        SubmarineSilhouetteData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SpotId_k__BackingField = value;
}