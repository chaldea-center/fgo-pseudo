void EventInfoEquipSkillPartsListComponent___ctor(
        EventInfoEquipSkillPartsListComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoEquipSkillPartsListComponent__Awake(
        EventInfoEquipSkillPartsListComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void EventInfoEquipSkillPartsListComponent__Setup(
        EventInfoEquipSkillPartsListComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventEquipSkillPartsEntity_array *Master_object; // x0
  __int64 v6; // x1
  il2cpp_array_size_t max_length; // x8
  EventEquipSkillPartsEntity_array *v8; // x20
  unsigned __int64 v9; // x23
  EventEquipSkillPartsEntity_o *v10; // x21
  Il2CppObject *v11; // x22
  const MethodInfo *v12; // x2
  float Height_k__BackingField; // s8
  const MethodInfo *v14; // x1

  if ( (byte_4CC891B & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_EventEquipSkillPartsMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_GameObjectHelper_Instantiate_EventInfoEquipSkillPartsComponent___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC891B = 1;
  }
  this->fields._Height_k__BackingField = 0.0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventEquipSkillPartsEntity_array *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_EventEquipSkillPartsMaster___);
  if ( !Master_object
    || (Master_object = EventEquipSkillPartsMaster__GetEventEquipSkillPartsEntityArray(
                          (EventEquipSkillPartsMaster_o *)Master_object,
                          eventId,
                          this->fields.groupId,
                          0)) == 0 )
  {
LABEL_18:
    sub_1C71608(Master_object, v6);
  }
  max_length = Master_object->max_length;
  v8 = Master_object;
  if ( (int)max_length >= 1 )
  {
    v9 = 0;
    do
    {
      if ( v9 >= (unsigned int)max_length )
        sub_1C71610(Master_object);
      v10 = v8->m_Items[v9];
      v11 = GameObjectHelper__Instantiate_object_(
              this->fields.equipSkillPrefab,
              this->fields.equipSkillParent,
              0,
              (const MethodInfo_31A4AF4 *)Method_GameObjectHelper_Instantiate_EventInfoEquipSkillPartsComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Master_object = (EventEquipSkillPartsEntity_array *)UnityEngine_Object__op_Equality(
                                                            (UnityEngine_Object_o *)v11,
                                                            0,
                                                            0);
      if ( ((unsigned __int8)Master_object & 1) == 0 )
      {
        BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v11, 1, 0);
        if ( !v11 )
          goto LABEL_18;
        EventInfoEquipSkillPartsComponent__Setup((EventInfoEquipSkillPartsComponent_o *)v11, v10, v12);
        ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)v11, -this->fields._Height_k__BackingField, 0);
        Height_k__BackingField = this->fields._Height_k__BackingField;
        this->fields._Height_k__BackingField = Height_k__BackingField
                                             + (float)(EventInfoEquipSkillPartsComponent__GetHeight(
                                                         (EventInfoEquipSkillPartsComponent_o *)v11,
                                                         v14)
                                                     + this->fields.space);
      }
      LODWORD(max_length) = v8->max_length;
      ++v9;
    }
    while ( (__int64)v9 < (int)max_length );
  }
  this->fields._Height_k__BackingField = this->fields._Height_k__BackingField + this->fields.heightOffset;
}


float EventInfoEquipSkillPartsListComponent__get_Height(
        EventInfoEquipSkillPartsListComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._Height_k__BackingField;
}


void EventInfoEquipSkillPartsListComponent__set_Height(
        EventInfoEquipSkillPartsListComponent_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._Height_k__BackingField = value;
}