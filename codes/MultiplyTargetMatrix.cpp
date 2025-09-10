void MultiplyTargetMatrix___ctor(MultiplyTargetMatrix_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C2A485 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_16575/*"_rootMatrix"*/);
    sub_1C2D490(&StringLiteral_16553/*"_invrootMatrix"*/);
    byte_4C2A485 = 1;
  }
  v5 = StringLiteral_16575/*"_rootMatrix"*/;
  this->fields.mainMatrix = (struct System_String_o *)StringLiteral_16575/*"_rootMatrix"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mainMatrix, v5, v2, v3);
  v6 = StringLiteral_16553/*"_invrootMatrix"*/;
  this->fields.invertMatrix = (struct System_String_o *)StringLiteral_16553/*"_invrootMatrix"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.invertMatrix, v6, v7, v8);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MultiplyTargetMatrix__SetTargetObj(
        MultiplyTargetMatrix_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( !obj )
    sub_1C2D6EC(this, 0);
  transform = UnityEngine_GameObject__get_transform(obj, 0);
  this->fields.targetObj = transform;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.targetObj, (int32_t)transform, v5, v6);
}


void MultiplyTargetMatrix__Start(MultiplyTargetMatrix_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetObj; // x21
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  struct UnityEngine_Transform_o *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C2A482 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A482 = 1;
  }
  targetObj = (UnityEngine_Object_o *)this->fields.targetObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(targetObj, 0, 0) && this->fields.targetObjPath )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0)) == 0 )
    {
      sub_1C2D6EC(gameObject, v6);
    }
    v7 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)gameObject, this->fields.targetObjPath, 0);
    this->fields.targetObj = v7;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.targetObj, (int32_t)v7, v8, v9);
  }
  MultiplyTargetMatrix__UpdateMatrix(this, v4);
}


void MultiplyTargetMatrix__UpdateMatrix(MultiplyTargetMatrix_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *Component_object; // x0
  const MethodInfo *v5; // x2
  struct XWeaponTrail_array *targetXWeaponTrails; // x8
  il2cpp_array_size_t max_length; // x1
  struct UnityEngine_Renderer_array **p_targetXWeaponTrailRenderers; // x20
  struct UnityEngine_Renderer_array *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct UnityEngine_Renderer_array *v12; // x1
  __int64 v13; // x22
  __int64 v14; // x23
  unsigned __int64 v15; // x26
  UnityEngine_Object_o *v16; // x21
  struct XWeaponTrail_array *v17; // x8
  __int64 v18; // x8
  UnityEngine_Object_o *v19; // x21
  unsigned int *v20; // x27
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x21
  __int64 v23; // x0

  if ( (byte_4C2A483 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&UnityEngine_Renderer___TypeInfo);
    byte_4C2A483 = 1;
  }
  MultiplyTargetMatrix__updateMatrix(this, this->fields.targetRenderers, v2);
  targetXWeaponTrails = this->fields.targetXWeaponTrails;
  if ( targetXWeaponTrails )
  {
    max_length = targetXWeaponTrails->max_length;
    if ( max_length )
    {
      p_targetXWeaponTrailRenderers = &this->fields.targetXWeaponTrailRenderers;
      if ( !this->fields.targetXWeaponTrailRenderers )
      {
        v9 = (struct UnityEngine_Renderer_array *)sub_1C2D538(UnityEngine_Renderer___TypeInfo, max_length);
        this->fields.targetXWeaponTrailRenderers = v9;
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.targetXWeaponTrailRenderers, (int32_t)v9, v10, v11);
        targetXWeaponTrails = this->fields.targetXWeaponTrails;
        if ( !targetXWeaponTrails )
LABEL_27:
          sub_1C2D6EC(Component_object, v12);
      }
      v13 = 4;
      v14 = 8;
      while ( 1 )
      {
        v12 = *p_targetXWeaponTrailRenderers;
        v15 = v13 - 4;
        if ( v13 - 4 >= SLODWORD(targetXWeaponTrails->max_length) )
          break;
        if ( !v12 )
          goto LABEL_27;
        if ( v15 >= LODWORD(v12->max_length) )
          goto LABEL_30;
        v16 = (UnityEngine_Object_o *)*((_QWORD *)&v12->obj.klass + v13);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Component_object = (Il2CppObject *)UnityEngine_Object__op_Equality(v16, 0, 0);
        if ( ((unsigned __int8)Component_object & 1) != 0 )
        {
          v17 = this->fields.targetXWeaponTrails;
          if ( !v17 )
            goto LABEL_27;
          if ( v15 >= LODWORD(v17->max_length) )
            goto LABEL_30;
          v18 = *((_QWORD *)&v17->obj.klass + v13);
          if ( !v18 )
            goto LABEL_27;
          v19 = *(UnityEngine_Object_o **)(v18 + 144);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(v19, 0, 0);
          if ( ((unsigned __int8)Component_object & 1) != 0 )
          {
            if ( !v19 )
              goto LABEL_27;
            v20 = (unsigned int *)*p_targetXWeaponTrailRenderers;
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)v19,
                                 (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
            if ( !v20 )
              goto LABEL_27;
            v22 = Component_object;
            if ( Component_object )
            {
              Component_object = (Il2CppObject *)sub_1C2D5CC(Component_object, *(_QWORD *)(*(_QWORD *)v20 + 64LL));
              if ( !Component_object )
              {
                v23 = sub_1C2D710(0);
                sub_1C2D5B8(v23, 0);
              }
            }
            if ( v15 >= v20[6] )
LABEL_30:
              sub_1C2D6F4(Component_object, v12, v5);
            *(_QWORD *)&v20[2 * v13] = v22;
            sub_1C2D434((CGThumbnailListItem_o *)&v20[v14], (int32_t)v22, (int32_t)v5, v21);
          }
        }
        targetXWeaponTrails = this->fields.targetXWeaponTrails;
        ++v13;
        v14 += 2;
        if ( !targetXWeaponTrails )
          goto LABEL_27;
      }
      MultiplyTargetMatrix__updateMatrix(this, v12, v5);
    }
  }
}


void MultiplyTargetMatrix__updateMatrix(
        MultiplyTargetMatrix_o *this,
        UnityEngine_Renderer_array *targetRenderers,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetObj; // x21
  bool v6; // w0
  __int64 v7; // x1
  UnityEngine_Transform_o *v8; // x0
  UnityEngine_Matrix4x4_o *inverse; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v13; // x24
  UnityEngine_Object_o *v14; // x22
  int32_t materialType; // w8
  UnityEngine_Material_o *sharedMaterial; // x0
  System_String_o *v17; // x1
  UnityEngine_Material_o *v18; // x0
  System_String_o *v19; // x1
  UnityEngine_Material_o *material; // x0
  System_String_o *mainMatrix; // x1
  UnityEngine_Material_o *v22; // x0
  System_String_o *invertMatrix; // x1
  UnityEngine_Matrix4x4_o v24; // [xsp+0h] [xbp-290h] BYREF
  UnityEngine_Matrix4x4_o v25; // [xsp+40h] [xbp-250h] BYREF
  UnityEngine_Matrix4x4_o v26; // [xsp+80h] [xbp-210h] BYREF
  UnityEngine_Matrix4x4_o v27; // [xsp+C0h] [xbp-1D0h]
  UnityEngine_Matrix4x4_o v28; // [xsp+100h] [xbp-190h] BYREF
  UnityEngine_Matrix4x4_o v29; // [xsp+140h] [xbp-150h] BYREF
  UnityEngine_Matrix4x4_o v30; // [xsp+180h] [xbp-110h] BYREF
  UnityEngine_Matrix4x4_o v31; // [xsp+1C0h] [xbp-D0h]
  UnityEngine_Matrix4x4_o v32; // [xsp+200h] [xbp-90h]

  if ( (byte_4C2A484 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A484 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  targetObj = (UnityEngine_Object_o *)this->fields.targetObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(targetObj, 0, 0);
  if ( targetRenderers && v6 )
  {
    v8 = this->fields.targetObj;
    if ( !v8
      || (UnityEngine_Transform__get_localToWorldMatrix(&v29, v8, 0), v32 = v29, (v8 = this->fields.targetObj) == 0) )
    {
      sub_1C2D6EC(v8, v7);
    }
    UnityEngine_Transform__get_localToWorldMatrix(&v29, v8, 0);
    v30 = v29;
    inverse = UnityEngine_Matrix4x4__get_inverse(&v29, &v30, 0);
    v31 = v29;
    max_length = targetRenderers->max_length;
    if ( (int)max_length >= 1 )
    {
      v13 = 0;
      do
      {
        if ( v13 >= (unsigned int)max_length )
          sub_1C2D6F4(inverse, v10, v11);
        v14 = (UnityEngine_Object_o *)targetRenderers->m_Items[v13];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        inverse = (UnityEngine_Matrix4x4_o *)UnityEngine_Object__op_Inequality(v14, 0, 0);
        if ( ((unsigned __int8)inverse & 1) != 0 )
        {
          materialType = this->fields.materialType;
          if ( materialType == 1 )
          {
            if ( !v14 )
              sub_1C2D6EC(inverse, v10);
            material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v14, 0);
            mainMatrix = this->fields.mainMatrix;
            v29 = v32;
            if ( !material )
              sub_1C2D6EC(0, mainMatrix);
            v25 = v29;
            UnityEngine_Material__SetMatrix(material, mainMatrix, &v25, 0);
            v22 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v14, 0);
            invertMatrix = this->fields.invertMatrix;
            v27 = v31;
            if ( !v22 )
              sub_1C2D6EC(0, invertMatrix);
            v24 = v27;
            UnityEngine_Material__SetMatrix(v22, invertMatrix, &v24, 0);
          }
          else if ( !materialType )
          {
            if ( !v14 )
              sub_1C2D6EC(inverse, v10);
            sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v14, 0);
            v17 = this->fields.mainMatrix;
            v29 = v32;
            if ( !sharedMaterial )
              sub_1C2D6EC(0, v17);
            v28 = v29;
            UnityEngine_Material__SetMatrix(sharedMaterial, v17, &v28, 0);
            v18 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v14, 0);
            v19 = this->fields.invertMatrix;
            v27 = v31;
            if ( !v18 )
              sub_1C2D6EC(0, v19);
            v26 = v27;
            UnityEngine_Material__SetMatrix(v18, v19, &v26, 0);
          }
        }
        LODWORD(max_length) = targetRenderers->max_length;
        ++v13;
      }
      while ( (__int64)v13 < (int)max_length );
    }
  }
}