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
  AssistEntity_o *CurrentEntity; // x20
  Il2CppObject *v9; // x21
  const MethodInfo *v10; // x2
  float Height_k__BackingField; // s8
  const MethodInfo *v12; // x1
  float v13; // s0

  v2 = this;
  if ( (byte_4C43353 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_AssistMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_GameObjectHelper_Instantiate_EventInfoAssistComponent___);
    this = (EventInfoAssistListComponent_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C43353 = 1;
  }
  assistIds = v2->fields.assistIds;
  v2->fields._Height_k__BackingField = 0.0;
  if ( assistIds )
  {
    max_length = assistIds->max_length;
    if ( (int)max_length < 1 )
    {
      v13 = 0.0;
    }
    else
    {
      v5 = 0;
      do
      {
        if ( v5 >= (unsigned int)max_length )
          sub_1C372BC(this);
        v6 = assistIds->m_Items[v5];
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_AssistMaster___);
        if ( !Master_object )
LABEL_25:
          sub_1C372B4(Master_object);
        CurrentEntity = AssistMaster__GetCurrentEntity((AssistMaster_o *)Master_object, v6, 0);
        if ( CurrentEntity )
          goto LABEL_15;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_AssistMaster___);
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
          v9 = GameObjectHelper__Instantiate_object_(
                 v2->fields.assistPrefab,
                 v2->fields.assistParent,
                 0,
                 (const MethodInfo_3140DFC *)Method_GameObjectHelper_Instantiate_EventInfoAssistComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (EventInfoAssistListComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v9, 0, 0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v9, 1, 0);
            if ( !v9 )
              goto LABEL_25;
            EventInfoAssistComponent__Setup((EventInfoAssistComponent_o *)v9, CurrentEntity, v10);
            ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)v9, -v2->fields._Height_k__BackingField, 0);
            Height_k__BackingField = v2->fields._Height_k__BackingField;
            v2->fields._Height_k__BackingField = Height_k__BackingField
                                               + (float)(EventInfoAssistComponent__GetHeight(
                                                           (EventInfoAssistComponent_o *)v9,
                                                           v12)
                                                       + v2->fields.space);
          }
        }
        LODWORD(max_length) = assistIds->max_length;
        ++v5;
      }
      while ( (__int64)v5 < (int)max_length );
      v13 = v2->fields._Height_k__BackingField;
    }
    v2->fields._Height_k__BackingField = v13 + v2->fields.heightOffset;
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