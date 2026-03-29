void EventInfoAssistListComponent___ctor(EventInfoAssistListComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoAssistListComponent__Awake(EventInfoAssistListComponent_o *this, const MethodInfo *method)
{
  ;
}


void EventInfoAssistListComponent__Setup(EventInfoAssistListComponent_o *this, const MethodInfo *method)
{
  EventInfoAssistListComponent_o *v2; // x19
  struct System_Int32_array *assistIds; // x22
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v5; // x23
  int32_t v6; // w21
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  AssistEntity_o *CurrentEntity; // x20
  Il2CppObject *v10; // x21
  const MethodInfo *v11; // x2
  float Height_k__BackingField; // s8
  const MethodInfo *v13; // x1
  float v14; // s0

  v2 = this;
  if ( (byte_4D30C1D & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_AssistMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_GameObjectHelper_Instantiate_EventInfoAssistComponent___);
    this = (EventInfoAssistListComponent_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D30C1D = 1;
  }
  assistIds = v2->fields.assistIds;
  v2->fields._Height_k__BackingField = 0.0;
  if ( assistIds )
  {
    max_length = assistIds->max_length;
    if ( (int)max_length < 1 )
    {
      v14 = 0.0;
    }
    else
    {
      v5 = 0;
      do
      {
        if ( v5 >= (unsigned int)max_length )
          sub_1C93D34(this);
        v6 = assistIds->m_Items[v5];
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_AssistMaster___);
        if ( !Master_object )
LABEL_25:
          sub_1C93D2C(Master_object, v8);
        CurrentEntity = AssistMaster__GetCurrentEntity((AssistMaster_o *)Master_object, v6, 0);
        if ( CurrentEntity )
          goto LABEL_15;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_AssistMaster___);
        if ( !Master_object )
          goto LABEL_25;
        this = (EventInfoAssistListComponent_o *)AssistMaster__GetMinPriorityEntity(
                                                   (AssistMaster_o *)Master_object,
                                                   v6,
                                                   0);
        CurrentEntity = (AssistEntity_o *)this;
        if ( this )
        {
LABEL_15:
          v10 = GameObjectHelper__Instantiate_object_(
                  v2->fields.assistPrefab,
                  v2->fields.assistParent,
                  0,
                  (const MethodInfo_31FDCA8 *)Method_GameObjectHelper_Instantiate_EventInfoAssistComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (EventInfoAssistListComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v10, 0, 0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v10, 1, 0);
            if ( !v10 )
              goto LABEL_25;
            EventInfoAssistComponent__Setup((EventInfoAssistComponent_o *)v10, CurrentEntity, v11);
            ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)v10, -v2->fields._Height_k__BackingField, 0);
            Height_k__BackingField = v2->fields._Height_k__BackingField;
            v2->fields._Height_k__BackingField = Height_k__BackingField
                                               + (float)(EventInfoAssistComponent__GetHeight(
                                                           (EventInfoAssistComponent_o *)v10,
                                                           v13)
                                                       + v2->fields.space);
          }
        }
        LODWORD(max_length) = assistIds->max_length;
        ++v5;
      }
      while ( (__int64)v5 < (int)max_length );
      v14 = v2->fields._Height_k__BackingField;
    }
    v2->fields._Height_k__BackingField = v14 + v2->fields.heightOffset;
  }
}


float EventInfoAssistListComponent__get_Height(EventInfoAssistListComponent_o *this, const MethodInfo *method)
{
  return this->fields._Height_k__BackingField;
}


void EventInfoAssistListComponent__set_Height(
        EventInfoAssistListComponent_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._Height_k__BackingField = value;
}