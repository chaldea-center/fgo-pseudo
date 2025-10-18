void ScriptActionAdvPrefabCameraLocator___ctor(ScriptActionAdvPrefabCameraLocator_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScriptActionAdvPrefabCameraLocator__Awake(ScriptActionAdvPrefabCameraLocator_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *targetRig; // x0
  System_Object_array *ComponentsInChildren_object__51641852; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C44C7E & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentsInChildren_Camera___);
    byte_4C44C7E = 1;
  }
  targetRig = this->fields.targetRig;
  if ( !targetRig )
    sub_1C372B4(0);
  ComponentsInChildren_object__51641852 = UnityEngine_GameObject__GetComponentsInChildren_object__51641852(
                                            targetRig,
                                            (const MethodInfo_313FDFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_Camera___);
  this->fields.targetCameras = (struct UnityEngine_Camera_array *)ComponentsInChildren_object__51641852;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.targetCameras,
    (int32_t)ComponentsInChildren_object__51641852,
    v5,
    v6);
}


void ScriptActionAdvPrefabCameraLocator__LateUpdate(
        ScriptActionAdvPrefabCameraLocator_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *targetRig; // x0
  UnityEngine_Transform_o *v4; // x20
  UnityEngine_Transform_o *v5; // x20
  struct UnityEngine_Camera_array *targetCameras; // x8
  int max_length; // w21
  unsigned int v8; // w22
  UnityEngine_Camera_o *v9; // x20
  float v10; // s0
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  targetRig = this->fields.targetRig;
  if ( !targetRig )
    goto LABEL_18;
  targetRig = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(targetRig, 0);
  if ( !this->fields.Locator )
    goto LABEL_18;
  v4 = (UnityEngine_Transform_o *)targetRig;
  position = UnityEngine_Transform__get_position(this->fields.Locator, 0);
  if ( !v4 )
    goto LABEL_18;
  UnityEngine_Transform__set_position(v4, position, 0);
  targetRig = this->fields.targetRig;
  if ( !targetRig )
    goto LABEL_18;
  targetRig = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(targetRig, 0);
  if ( !this->fields.Locator )
    goto LABEL_18;
  v5 = (UnityEngine_Transform_o *)targetRig;
  rotation = UnityEngine_Transform__get_rotation(this->fields.Locator, 0);
  if ( !v5 )
    goto LABEL_18;
  UnityEngine_Transform__set_rotation(v5, rotation, 0);
  if ( this->fields.scaleToCameraParameter )
  {
    targetCameras = this->fields.targetCameras;
    if ( !targetCameras )
      goto LABEL_18;
    max_length = targetCameras->max_length;
    if ( max_length >= 1 )
    {
      v8 = 0;
      do
      {
        if ( v8 >= LODWORD(targetCameras->max_length) )
          sub_1C372BC(targetRig);
        targetRig = (UnityEngine_GameObject_o *)this->fields.Locator;
        if ( !targetRig )
          break;
        v9 = targetCameras->m_Items[v8];
        LODWORD(v10) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)targetRig, 0);
        if ( !v9 )
          break;
        UnityEngine_Camera__set_nearClipPlane(v9, v10, 0);
        targetRig = (UnityEngine_GameObject_o *)this->fields.Locator;
        if ( !targetRig )
          break;
        localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)targetRig, 0);
        UnityEngine_Camera__set_farClipPlane(v9, localScale.fields.y, 0);
        targetRig = (UnityEngine_GameObject_o *)this->fields.Locator;
        if ( !targetRig )
          break;
        v13 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)targetRig, 0);
        UnityEngine_Camera__set_fieldOfView(v9, v13.fields.z, 0);
        if ( max_length == ++v8 )
          return;
        targetCameras = this->fields.targetCameras;
      }
      while ( targetCameras );
LABEL_18:
      sub_1C372B4(targetRig);
    }
  }
}