void __fastcall EventInfoAssistListComponent___ctor(EventInfoAssistListComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoAssistListComponent__Awake(EventInfoAssistListComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoAssistListComponent__Setup(EventInfoAssistListComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventInfoAssistListComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Int32_array *assistIds; // x22
  __int64 v8; // x8
  unsigned __int64 v9; // x23
  int32_t v10; // w21
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  AssistEntity_o *CurrentEntity; // x20
  Il2CppObject *v14; // x21
  const MethodInfo *v15; // x2
  float Height_k__BackingField; // s8
  const MethodInfo *v17; // x1
  float v18; // s0

  v3 = this;
  if ( (byte_4B1C912 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_AssistMaster___, method);
    sub_1BCAFF8(&DataManager_TypeInfo, v4);
    sub_1BCAFF8(&Method_GameObjectHelper_Instantiate_EventInfoAssistComponent___, v5);
    this = (EventInfoAssistListComponent_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v6);
    byte_4B1C912 = 1;
  }
  assistIds = v3->fields.assistIds;
  v3->fields._Height_k__BackingField = 0.0;
  if ( assistIds )
  {
    v8 = *(_QWORD *)&assistIds->max_length;
    if ( (int)v8 < 1 )
    {
      v18 = 0.0;
    }
    else
    {
      v9 = 0LL;
      do
      {
        if ( v9 >= (unsigned int)v8 )
          sub_1BCB25C(this, method, v2);
        v10 = assistIds->m_Items[v9 + 1];
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_AssistMaster___);
        if ( !Master_object )
LABEL_25:
          sub_1BCB254(Master_object, v12);
        CurrentEntity = AssistMaster__GetCurrentEntity((AssistMaster_o *)Master_object, v10, 0LL);
        if ( CurrentEntity )
          goto LABEL_15;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_AssistMaster___);
        if ( !Master_object )
          goto LABEL_25;
        this = (EventInfoAssistListComponent_o *)AssistMaster__GetMinPriorityEntity(
                                                   (AssistMaster_o *)Master_object,
                                                   v10,
                                                   0LL);
        CurrentEntity = (AssistEntity_o *)this;
        if ( this )
        {
LABEL_15:
          v14 = GameObjectHelper__Instantiate_object_(
                  v3->fields.assistPrefab,
                  v3->fields.assistParent,
                  0,
                  (const MethodInfo_3070334 *)Method_GameObjectHelper_Instantiate_EventInfoAssistComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (EventInfoAssistListComponent_o *)UnityEngine_Object__op_Equality(
                                                     (UnityEngine_Object_o *)v14,
                                                     0LL,
                                                     0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v14, 1, 0LL);
            if ( !v14 )
              goto LABEL_25;
            EventInfoAssistComponent__Setup((EventInfoAssistComponent_o *)v14, CurrentEntity, v15);
            ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)v14, -v3->fields._Height_k__BackingField, 0LL);
            Height_k__BackingField = v3->fields._Height_k__BackingField;
            v3->fields._Height_k__BackingField = Height_k__BackingField
                                               + (float)(EventInfoAssistComponent__GetHeight(
                                                           (EventInfoAssistComponent_o *)v14,
                                                           v17)
                                                       + v3->fields.space);
          }
        }
        LODWORD(v8) = assistIds->max_length;
        ++v9;
      }
      while ( (__int64)v9 < (int)v8 );
      v18 = v3->fields._Height_k__BackingField;
    }
    v3->fields._Height_k__BackingField = v18 + v3->fields.heightOffset;
  }
}


float __fastcall EventInfoAssistListComponent__get_Height(
        EventInfoAssistListComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._Height_k__BackingField;
}


void __fastcall EventInfoAssistListComponent__set_Height(
        EventInfoAssistListComponent_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._Height_k__BackingField = value;
}