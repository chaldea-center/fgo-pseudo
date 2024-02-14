void __fastcall SubmarineSilhouetteData___ctor(
        SubmarineSilhouetteData_o *this,
        SubmarineSpotInfo_o *spotInfo,
        const MethodInfo *method)
{
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct SpotEntity_o *SpotEntity_k__BackingField; // x8
  struct EventPanelSpotEntity_o *EventPanelSpotEntity_k__BackingField; // x8
  struct EventPanelSpotEntity_o *v14; // x8
  struct System_Int32_array *objectQuestIds; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct EventPanelSpotEntity_o *v22; // x8
  struct System_Int32_array_array *enemySizeIdxListJson; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !spotInfo )
    goto LABEL_7;
  SpotEntity_k__BackingField = spotInfo->fields._SpotEntity_k__BackingField;
  if ( !SpotEntity_k__BackingField )
    goto LABEL_7;
  this->fields._SpotId_k__BackingField = SpotEntity_k__BackingField->fields.id;
  this->fields._PanelId_k__BackingField = spotInfo->fields._PanelId_k__BackingField;
  EventPanelSpotEntity_k__BackingField = spotInfo->fields._EventPanelSpotEntity_k__BackingField;
  if ( !EventPanelSpotEntity_k__BackingField
    || (this->fields._ObjectId_k__BackingField = EventPanelSpotEntity_k__BackingField->fields.objectId,
        (v14 = spotInfo->fields._EventPanelSpotEntity_k__BackingField) == 0LL)
    || (objectQuestIds = v14->fields.objectQuestIds,
        this->fields._ObjectQuestIds_k__BackingField = objectQuestIds,
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields._ObjectQuestIds_k__BackingField,
          (System_Int32_array **)objectQuestIds,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11),
        (v22 = spotInfo->fields._EventPanelSpotEntity_k__BackingField) == 0LL) )
  {
LABEL_7:
    sub_B0D97C(v5);
  }
  enemySizeIdxListJson = v22->fields.enemySizeIdxListJson;
  this->fields._EnemySizeIdx_k__BackingField = enemySizeIdxListJson;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._EnemySizeIdx_k__BackingField,
    (System_Int32_array **)enemySizeIdxListJson,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SubmarineSilhouetteData__HasClearCondQuestId(
        SubmarineSilhouetteData_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  struct System_Int32_array *ObjectQuestIds_k__BackingField; // x0

  if ( (byte_4215F61 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_IndexOf_int___, *(_QWORD *)&questId);
    byte_4215F61 = 1;
  }
  ObjectQuestIds_k__BackingField = this->fields._ObjectQuestIds_k__BackingField;
  if ( ObjectQuestIds_k__BackingField )
  {
    if ( ObjectQuestIds_k__BackingField->max_length )
      LOBYTE(ObjectQuestIds_k__BackingField) = System_Array__IndexOf_int_(
                                                 ObjectQuestIds_k__BackingField,
                                                 questId,
                                                 (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___) >= 0;
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._EnemySizeIdx_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._EnemySizeIdx_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._ObjectQuestIds_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._ObjectQuestIds_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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