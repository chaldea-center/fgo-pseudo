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


// local variable allocation has failed, the output may be wrong!
void EventInfoEquipSkillPartsListComponent__Setup(
        EventInfoEquipSkillPartsListComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_c *v5; // x0
  int v6; // w8
  EventEquipSkillPartsEntity_array *Master_object; // x0
  __int64 v8; // x1
  il2cpp_array_size_t max_length; // x8
  EventEquipSkillPartsEntity_array *v10; // x20
  unsigned __int64 v11; // x23
  EventEquipSkillPartsEntity_o *v12; // x21
  __int64 v13; // x1
  Il2CppObject *v14; // x22
  const MethodInfo *v15; // x2
  float Height_k__BackingField; // s8
  const MethodInfo *v17; // x1

  if ( (byte_593993C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventEquipSkillPartsMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_GameObjectHelper_Instantiate_EventInfoEquipSkillPartsComponent___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593993C = 1;
  }
  v5 = DataManager_TypeInfo;
  v6 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  this->fields._Height_k__BackingField = 0.0;
  if ( !v6 )
    j_il2cpp_runtime_class_init_0(v5, *(_QWORD *)&eventId);
  Master_object = (EventEquipSkillPartsEntity_array *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventEquipSkillPartsMaster___);
  if ( !Master_object
    || (Master_object = EventEquipSkillPartsMaster__GetEventEquipSkillPartsEntityArray(
                          (EventEquipSkillPartsMaster_o *)Master_object,
                          eventId,
                          this->fields.groupId,
                          0)) == 0 )
  {
LABEL_18:
    sub_21FFECC(Master_object, v8);
  }
  max_length = Master_object->max_length;
  v10 = Master_object;
  if ( (int)max_length >= 1 )
  {
    v11 = 0;
    do
    {
      if ( v11 >= (unsigned int)max_length )
        sub_21FFED4(Master_object);
      v12 = v10->m_Items[v11];
      v14 = GameObjectHelper__Instantiate_object_(
              this->fields.equipSkillPrefab,
              this->fields.equipSkillParent,
              0,
              (const MethodInfo_38853E4 *)Method_GameObjectHelper_Instantiate_EventInfoEquipSkillPartsComponent___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      Master_object = (EventEquipSkillPartsEntity_array *)UnityEngine_Object__op_Equality(
                                                            (UnityEngine_Object_o *)v14,
                                                            0,
                                                            0);
      if ( ((unsigned __int8)Master_object & 1) == 0 )
      {
        BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v14, 1, 0);
        if ( !v14 )
          goto LABEL_18;
        EventInfoEquipSkillPartsComponent__Setup((EventInfoEquipSkillPartsComponent_o *)v14, v12, v15);
        ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)v14, -this->fields._Height_k__BackingField, 0);
        Height_k__BackingField = this->fields._Height_k__BackingField;
        this->fields._Height_k__BackingField = Height_k__BackingField
                                             + (float)(EventInfoEquipSkillPartsComponent__GetHeight(
                                                         (EventInfoEquipSkillPartsComponent_o *)v14,
                                                         v17)
                                                     + this->fields.space);
      }
      LODWORD(max_length) = v10->max_length;
      ++v11;
    }
    while ( (__int64)v11 < (int)max_length );
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