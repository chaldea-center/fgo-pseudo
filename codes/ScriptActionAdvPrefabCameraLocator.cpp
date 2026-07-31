void ScriptActionAdvPrefabCameraLocator___ctor(ScriptActionAdvPrefabCameraLocator_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScriptActionAdvPrefabCameraLocator__Awake(ScriptActionAdvPrefabCameraLocator_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *targetRig; // x0
  System_Object_array *ComponentsInChildren_object__59262092; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_593A5ED & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponentsInChildren_Camera___);
    byte_593A5ED = 1;
  }
  targetRig = this->fields.targetRig;
  if ( !targetRig )
    sub_21FFECC(0, method);
  ComponentsInChildren_object__59262092 = UnityEngine_GameObject__GetComponentsInChildren_object__59262092(
                                            targetRig,
                                            (const MethodInfo_388448C *)Method_UnityEngine_GameObject_GetComponentsInChildren_Camera___);
  this->fields.targetCameras = (struct UnityEngine_Camera_array *)ComponentsInChildren_object__59262092;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetCameras,
    (int32_t)ComponentsInChildren_object__59262092,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void ScriptActionAdvPrefabCameraLocator__LateUpdate(
        ScriptActionAdvPrefabCameraLocator_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *targetRig; // x0
  UnityEngine_Transform_o *v4; // x20
  UnityEngine_Transform_o *v5; // x20
  struct UnityEngine_Camera_array *targetCameras; // x8
  il2cpp_array_size_t max_length; // x21
  __int64 v8; // x22
  struct UnityEngine_Camera_array *v9; // x8
  UnityEngine_Camera_o *v10; // x20
  float v11; // s0
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  targetRig = this->fields.targetRig;
  if ( !targetRig )
    goto LABEL_19;
  targetRig = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(targetRig, 0);
  if ( !this->fields.Locator )
    goto LABEL_19;
  v4 = (UnityEngine_Transform_o *)targetRig;
  position = UnityEngine_Transform__get_position(this->fields.Locator, 0);
  if ( !v4 )
    goto LABEL_19;
  UnityEngine_Transform__set_position(v4, position, 0);
  targetRig = this->fields.targetRig;
  if ( !targetRig )
    goto LABEL_19;
  targetRig = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(targetRig, 0);
  if ( !this->fields.Locator )
    goto LABEL_19;
  v5 = (UnityEngine_Transform_o *)targetRig;
  rotation = UnityEngine_Transform__get_rotation(this->fields.Locator, 0);
  if ( !v5 )
    goto LABEL_19;
  UnityEngine_Transform__set_rotation(v5, rotation, 0);
  if ( this->fields.scaleToCameraParameter )
  {
    targetCameras = this->fields.targetCameras;
    if ( !targetCameras )
      goto LABEL_19;
    max_length = targetCameras->max_length;
    if ( (int)max_length >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        v9 = this->fields.targetCameras;
        if ( !v9 )
          break;
        if ( (unsigned int)v8 >= LODWORD(v9->max_length) )
          sub_21FFED4(targetRig);
        targetRig = (UnityEngine_GameObject_o *)this->fields.Locator;
        if ( !targetRig )
          break;
        v10 = v9->m_Items[v8];
        LODWORD(v11) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)targetRig, 0);
        if ( !v10 )
          break;
        UnityEngine_Camera__set_nearClipPlane(v10, v11, 0);
        targetRig = (UnityEngine_GameObject_o *)this->fields.Locator;
        if ( !targetRig )
          break;
        localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)targetRig, 0);
        UnityEngine_Camera__set_farClipPlane(v10, localScale.fields.y, 0);
        targetRig = (UnityEngine_GameObject_o *)this->fields.Locator;
        if ( !targetRig )
          break;
        v14 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)targetRig, 0);
        UnityEngine_Camera__set_fieldOfView(v10, v14.fields.z, 0);
        if ( (_DWORD)max_length == (_DWORD)++v8 )
          return;
      }
LABEL_19:
      sub_21FFECC(targetRig, method);
    }
  }
}