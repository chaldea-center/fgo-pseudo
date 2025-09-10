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
  __int64 v2; // x2
  EventInfoAssistListComponent_o *v3; // x19
  struct System_Int32_array *assistIds; // x22
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v6; // x23
  int32_t v7; // w21
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  AssistEntity_o *CurrentEntity; // x20
  Il2CppObject *v11; // x21
  const MethodInfo *v12; // x2
  float Height_k__BackingField; // s8
  const MethodInfo *v14; // x1
  float v15; // s0

  v3 = this;
  if ( (byte_4C276D0 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_AssistMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_GameObjectHelper_Instantiate_EventInfoAssistComponent___);
    this = (EventInfoAssistListComponent_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C276D0 = 1;
  }
  assistIds = v3->fields.assistIds;
  v3->fields._Height_k__BackingField = 0.0;
  if ( assistIds )
  {
    max_length = assistIds->max_length;
    if ( (int)max_length < 1 )
    {
      v15 = 0.0;
    }
    else
    {
      v6 = 0;
      do
      {
        if ( v6 >= (unsigned int)max_length )
          sub_1C2D6F4(this, method, v2);
        v7 = assistIds->m_Items[v6];
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_AssistMaster___);
        if ( !Master_object )
LABEL_25:
          sub_1C2D6EC(Master_object, v9);
        CurrentEntity = AssistMaster__GetCurrentEntity((AssistMaster_o *)Master_object, v7, 0);
        if ( CurrentEntity )
          goto LABEL_15;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_AssistMaster___);
        if ( !Master_object )
          goto LABEL_25;
        this = (EventInfoAssistListComponent_o *)AssistMaster__GetMinPriorityEntity(
                                                   (AssistMaster_o *)Master_object,
                                                   v7,
                                                   0);
        CurrentEntity = (AssistEntity_o *)this;
        if ( this )
        {
LABEL_15:
          v11 = GameObjectHelper__Instantiate_object_(
                  v3->fields.assistPrefab,
                  v3->fields.assistParent,
                  0,
                  (const MethodInfo_3127AF4 *)Method_GameObjectHelper_Instantiate_EventInfoAssistComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (EventInfoAssistListComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v11, 0, 0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v11, 1, 0);
            if ( !v11 )
              goto LABEL_25;
            EventInfoAssistComponent__Setup((EventInfoAssistComponent_o *)v11, CurrentEntity, v12);
            ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)v11, -v3->fields._Height_k__BackingField, 0);
            Height_k__BackingField = v3->fields._Height_k__BackingField;
            v3->fields._Height_k__BackingField = Height_k__BackingField
                                               + (float)(EventInfoAssistComponent__GetHeight(
                                                           (EventInfoAssistComponent_o *)v11,
                                                           v14)
                                                       + v3->fields.space);
          }
        }
        LODWORD(max_length) = assistIds->max_length;
        ++v6;
      }
      while ( (__int64)v6 < (int)max_length );
      v15 = v3->fields._Height_k__BackingField;
    }
    v3->fields._Height_k__BackingField = v15 + v3->fields.heightOffset;
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