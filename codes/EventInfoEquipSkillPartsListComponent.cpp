void __fastcall EventInfoEquipSkillPartsListComponent___ctor(
        EventInfoEquipSkillPartsListComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoEquipSkillPartsListComponent__Awake(
        EventInfoEquipSkillPartsListComponent_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoEquipSkillPartsListComponent__Setup(
        EventInfoEquipSkillPartsListComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  EventEquipSkillPartsEntity_array *Master_object; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x8
  EventEquipSkillPartsEntity_array *v12; // x20
  unsigned __int64 v13; // x23
  EventEquipSkillPartsEntity_o *v14; // x21
  Il2CppObject *v15; // x22
  const MethodInfo *v16; // x2
  float Height_k__BackingField; // s8
  const MethodInfo *v18; // x1

  if ( (byte_4B035A5 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_EventEquipSkillPartsMaster___, *(_QWORD *)&eventId);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    sub_1BC3008(&Method_GameObjectHelper_Instantiate_EventInfoEquipSkillPartsComponent___, v6);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    byte_4B035A5 = 1;
  }
  this->fields._Height_k__BackingField = 0.0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventEquipSkillPartsEntity_array *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventEquipSkillPartsMaster___);
  if ( !Master_object
    || (Master_object = EventEquipSkillPartsMaster__GetEventEquipSkillPartsEntityArray(
                          (EventEquipSkillPartsMaster_o *)Master_object,
                          eventId,
                          this->fields.groupId,
                          0LL)) == 0LL )
  {
LABEL_18:
    sub_1BC3264(Master_object, v9);
  }
  v11 = *(_QWORD *)&Master_object->max_length;
  v12 = Master_object;
  if ( (int)v11 >= 1 )
  {
    v13 = 0LL;
    do
    {
      if ( v13 >= (unsigned int)v11 )
        sub_1BC326C(Master_object, v9, v10);
      v14 = v12->m_Items[v13];
      v15 = GameObjectHelper__Instantiate_object_(
              this->fields.equipSkillPrefab,
              this->fields.equipSkillParent,
              0,
              (const MethodInfo_30575BC *)Method_GameObjectHelper_Instantiate_EventInfoEquipSkillPartsComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Master_object = (EventEquipSkillPartsEntity_array *)UnityEngine_Object__op_Equality(
                                                            (UnityEngine_Object_o *)v15,
                                                            0LL,
                                                            0LL);
      if ( ((unsigned __int8)Master_object & 1) == 0 )
      {
        BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v15, 1, 0LL);
        if ( !v15 )
          goto LABEL_18;
        EventInfoEquipSkillPartsComponent__Setup((EventInfoEquipSkillPartsComponent_o *)v15, v14, v16);
        ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)v15, -this->fields._Height_k__BackingField, 0LL);
        Height_k__BackingField = this->fields._Height_k__BackingField;
        this->fields._Height_k__BackingField = Height_k__BackingField
                                             + (float)(EventInfoEquipSkillPartsComponent__GetHeight(
                                                         (EventInfoEquipSkillPartsComponent_o *)v15,
                                                         v18)
                                                     + this->fields.space);
      }
      LODWORD(v11) = v12->max_length;
      ++v13;
    }
    while ( (__int64)v13 < (int)v11 );
  }
  this->fields._Height_k__BackingField = this->fields._Height_k__BackingField + this->fields.heightOffset;
}


float __fastcall EventInfoEquipSkillPartsListComponent__get_Height(
        EventInfoEquipSkillPartsListComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._Height_k__BackingField;
}


void __fastcall EventInfoEquipSkillPartsListComponent__set_Height(
        EventInfoEquipSkillPartsListComponent_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._Height_k__BackingField = value;
}