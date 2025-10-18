void SubmarineSilhouetteData___ctor(
        SubmarineSilhouetteData_o *this,
        SubmarineSpotInfo_o *spotInfo,
        const MethodInfo *method)
{
  __int64 v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct SpotEntity_o *SpotEntity_k__BackingField; // x8
  struct EventPanelSpotEntity_o *EventPanelSpotEntity_k__BackingField; // x8
  struct System_Int32_array *objectQuestIds; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct EventPanelSpotEntity_o *v13; // x8
  struct System_Int32_array_array *enemySizeIdxListJson; // x1

  System_Object___ctor((Il2CppObject *)this, 0);
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
        sub_1C36FFC(
          (CGThumbnailListItem_o *)&this->fields._ObjectQuestIds_k__BackingField,
          (int32_t)objectQuestIds,
          v6,
          v7),
        (v13 = spotInfo->fields._EventPanelSpotEntity_k__BackingField) == 0) )
  {
LABEL_6:
    sub_1C372B4(v5);
  }
  enemySizeIdxListJson = v13->fields.enemySizeIdxListJson;
  this->fields._EnemySizeIdx_k__BackingField = enemySizeIdxListJson;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields._EnemySizeIdx_k__BackingField,
    (int32_t)enemySizeIdxListJson,
    v11,
    v12);
}


bool SubmarineSilhouetteData__HasClearCondQuestId(
        SubmarineSilhouetteData_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  struct System_Int32_array *ObjectQuestIds_k__BackingField; // x0

  if ( (byte_4C3F937 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_IndexOf_int___);
    byte_4C3F937 = 1;
  }
  ObjectQuestIds_k__BackingField = this->fields._ObjectQuestIds_k__BackingField;
  if ( ObjectQuestIds_k__BackingField )
  {
    if ( LODWORD(ObjectQuestIds_k__BackingField->max_length) )
      LOBYTE(ObjectQuestIds_k__BackingField) = System_Array__IndexOf_int_(
                                                 ObjectQuestIds_k__BackingField,
                                                 questId,
                                                 (const MethodInfo_31EECD8 *)Method_System_Array_IndexOf_int___) >= 0;
    else
      LOBYTE(ObjectQuestIds_k__BackingField) = 0;
  }
  return (char)ObjectQuestIds_k__BackingField;
}


bool SubmarineSilhouetteData__get_Alive(SubmarineSilhouetteData_o *this, const MethodInfo *method)
{
  return this->fields._Alive_k__BackingField;
}


System_Int32_array_array *SubmarineSilhouetteData__get_EnemySizeIdx(
        SubmarineSilhouetteData_o *this,
        const MethodInfo *method)
{
  return this->fields._EnemySizeIdx_k__BackingField;
}


bool SubmarineSilhouetteData__get_HasEnemySize(SubmarineSilhouetteData_o *this, const MethodInfo *method)
{
  struct System_Int32_array_array *EnemySizeIdx_k__BackingField; // x8

  EnemySizeIdx_k__BackingField = this->fields._EnemySizeIdx_k__BackingField;
  return EnemySizeIdx_k__BackingField && LODWORD(EnemySizeIdx_k__BackingField->max_length) != 0;
}


bool SubmarineSilhouetteData__get_HasObjectQuestIds(SubmarineSilhouetteData_o *this, const MethodInfo *method)
{
  struct System_Int32_array *ObjectQuestIds_k__BackingField; // x8

  ObjectQuestIds_k__BackingField = this->fields._ObjectQuestIds_k__BackingField;
  return ObjectQuestIds_k__BackingField && LODWORD(ObjectQuestIds_k__BackingField->max_length) != 0;
}


bool SubmarineSilhouetteData__get_IsOnPanel(SubmarineSilhouetteData_o *this, const MethodInfo *method)
{
  return this->fields._PanelId_k__BackingField > 0;
}


int32_t SubmarineSilhouetteData__get_ObjectId(SubmarineSilhouetteData_o *this, const MethodInfo *method)
{
  return this->fields._ObjectId_k__BackingField;
}


System_Int32_array *SubmarineSilhouetteData__get_ObjectQuestIds(
        SubmarineSilhouetteData_o *this,
        const MethodInfo *method)
{
  return this->fields._ObjectQuestIds_k__BackingField;
}


int32_t SubmarineSilhouetteData__get_PanelId(SubmarineSilhouetteData_o *this, const MethodInfo *method)
{
  return this->fields._PanelId_k__BackingField;
}


int32_t SubmarineSilhouetteData__get_SpotId(SubmarineSilhouetteData_o *this, const MethodInfo *method)
{
  return this->fields._SpotId_k__BackingField;
}


void SubmarineSilhouetteData__set_Alive(SubmarineSilhouetteData_o *this, bool value, const MethodInfo *method)
{
  this->fields._Alive_k__BackingField = value;
}


void SubmarineSilhouetteData__set_EnemySizeIdx(
        SubmarineSilhouetteData_o *this,
        System_Int32_array_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._EnemySizeIdx_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._EnemySizeIdx_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void SubmarineSilhouetteData__set_ObjectId(SubmarineSilhouetteData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._ObjectId_k__BackingField = value;
}


void SubmarineSilhouetteData__set_ObjectQuestIds(
        SubmarineSilhouetteData_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ObjectQuestIds_k__BackingField = value;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields._ObjectQuestIds_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void SubmarineSilhouetteData__set_PanelId(SubmarineSilhouetteData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._PanelId_k__BackingField = value;
}


void SubmarineSilhouetteData__set_SpotId(SubmarineSilhouetteData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._SpotId_k__BackingField = value;
}