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
  il2cpp_array_size_t max_length; // x8
  EventEquipSkillPartsEntity_array *v7; // x20
  unsigned __int64 v8; // x23
  EventEquipSkillPartsEntity_o *v9; // x21
  Il2CppObject *v10; // x22
  const MethodInfo *v11; // x2
  float Height_k__BackingField; // s8
  const MethodInfo *v13; // x1

  if ( (byte_4C38EB9 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_EventEquipSkillPartsMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_GameObjectHelper_Instantiate_EventInfoEquipSkillPartsComponent___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C38EB9 = 1;
  }
  this->fields._Height_k__BackingField = 0.0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventEquipSkillPartsEntity_array *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventEquipSkillPartsMaster___);
  if ( !Master_object
    || (Master_object = EventEquipSkillPartsMaster__GetEventEquipSkillPartsEntityArray(
                          (EventEquipSkillPartsMaster_o *)Master_object,
                          eventId,
                          this->fields.groupId,
                          0)) == 0 )
  {
LABEL_18:
    sub_1C32E7C(Master_object);
  }
  max_length = Master_object->max_length;
  v7 = Master_object;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    do
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1C32E84(Master_object);
      v9 = v7->m_Items[v8];
      v10 = GameObjectHelper__Instantiate_object_(
              this->fields.equipSkillPrefab,
              this->fields.equipSkillParent,
              0,
              (const MethodInfo_3136594 *)Method_GameObjectHelper_Instantiate_EventInfoEquipSkillPartsComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Master_object = (EventEquipSkillPartsEntity_array *)UnityEngine_Object__op_Equality(
                                                            (UnityEngine_Object_o *)v10,
                                                            0,
                                                            0);
      if ( ((unsigned __int8)Master_object & 1) == 0 )
      {
        BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v10, 1, 0);
        if ( !v10 )
          goto LABEL_18;
        EventInfoEquipSkillPartsComponent__Setup((EventInfoEquipSkillPartsComponent_o *)v10, v9, v11);
        ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)v10, -this->fields._Height_k__BackingField, 0);
        Height_k__BackingField = this->fields._Height_k__BackingField;
        this->fields._Height_k__BackingField = Height_k__BackingField
                                             + (float)(EventInfoEquipSkillPartsComponent__GetHeight(
                                                         (EventInfoEquipSkillPartsComponent_o *)v10,
                                                         v13)
                                                     + this->fields.space);
      }
      LODWORD(max_length) = v7->max_length;
      ++v8;
    }
    while ( (__int64)v8 < (int)max_length );
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