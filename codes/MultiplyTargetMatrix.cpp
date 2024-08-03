void __fastcall MultiplyTargetMatrix___ctor(MultiplyTargetMatrix_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  int32_t v6; // w1
  int32_t v7; // w1
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FF077 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_16502/*"_rootMatrix"*/, method);
    sub_1B640C8(&StringLiteral_16476/*"_invrootMatrix"*/, v5);
    byte_49FF077 = 1;
  }
  v6 = StringLiteral_16502/*"_rootMatrix"*/;
  this->fields.mainMatrix = (struct System_String_o *)StringLiteral_16502/*"_rootMatrix"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainMatrix, v6, v2, v3);
  v7 = StringLiteral_16476/*"_invrootMatrix"*/;
  this->fields.invertMatrix = (struct System_String_o *)StringLiteral_16476/*"_invrootMatrix"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.invertMatrix, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MultiplyTargetMatrix__SetTargetObj(
        MultiplyTargetMatrix_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( !obj )
    sub_1B64324(this);
  transform = UnityEngine_GameObject__get_transform(obj, 0LL);
  this->fields.targetObj = transform;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.targetObj, (int32_t)transform, v5, v6);
}


void __fastcall MultiplyTargetMatrix__Start(MultiplyTargetMatrix_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetObj; // x21
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_Transform_o *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49FF074 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF074 = 1;
  }
  targetObj = (UnityEngine_Object_o *)this->fields.targetObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(targetObj, 0LL, 0LL) && this->fields.targetObjPath )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL)) == 0LL )
    {
      sub_1B64324(gameObject);
    }
    v6 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)gameObject, this->fields.targetObjPath, 0LL);
    this->fields.targetObj = v6;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.targetObj, (int32_t)v6, v7, v8);
  }
  MultiplyTargetMatrix__UpdateMatrix(this, v4);
}


void __fastcall MultiplyTargetMatrix__UpdateMatrix(MultiplyTargetMatrix_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v7; // x2
  struct XWeaponTrail_array *targetXWeaponTrails; // x8
  __int64 v9; // x1
  struct UnityEngine_Renderer_array **p_targetXWeaponTrailRenderers; // x20
  struct UnityEngine_Renderer_array *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x22
  __int64 v15; // x23
  UnityEngine_Renderer_array *v16; // x1
  unsigned __int64 v17; // x26
  UnityEngine_Object_o *v18; // x21
  struct XWeaponTrail_array *v19; // x8
  __int64 v20; // x8
  UnityEngine_Object_o *v21; // x21
  unsigned int *v22; // x27
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *v25; // x21
  __int64 v26; // x0

  if ( (byte_49FF075 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Renderer___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&UnityEngine_Renderer___TypeInfo, v5);
    byte_49FF075 = 1;
  }
  MultiplyTargetMatrix__updateMatrix(this, this->fields.targetRenderers, v2);
  targetXWeaponTrails = this->fields.targetXWeaponTrails;
  if ( targetXWeaponTrails )
  {
    v9 = *(_QWORD *)&targetXWeaponTrails->max_length;
    if ( v9 )
    {
      p_targetXWeaponTrailRenderers = &this->fields.targetXWeaponTrailRenderers;
      if ( !this->fields.targetXWeaponTrailRenderers )
      {
        v11 = (struct UnityEngine_Renderer_array *)sub_1B64170(UnityEngine_Renderer___TypeInfo, v9);
        this->fields.targetXWeaponTrailRenderers = v11;
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&this->fields.targetXWeaponTrailRenderers,
          (int32_t)v11,
          v12,
          v13);
        targetXWeaponTrails = this->fields.targetXWeaponTrails;
        if ( !targetXWeaponTrails )
LABEL_27:
          sub_1B64324(Component_object);
      }
      v14 = 4LL;
      v15 = 8LL;
      while ( 1 )
      {
        v16 = *p_targetXWeaponTrailRenderers;
        v17 = v14 - 4;
        if ( v14 - 4 >= (int)targetXWeaponTrails->max_length )
          break;
        if ( !v16 )
          goto LABEL_27;
        if ( v17 >= v16->max_length )
          goto LABEL_30;
        v18 = (UnityEngine_Object_o *)*((_QWORD *)&v16->obj.klass + v14);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Component_object = (Il2CppObject *)UnityEngine_Object__op_Equality(v18, 0LL, 0LL);
        if ( ((unsigned __int8)Component_object & 1) != 0 )
        {
          v19 = this->fields.targetXWeaponTrails;
          if ( !v19 )
            goto LABEL_27;
          if ( v17 >= v19->max_length )
            goto LABEL_30;
          v20 = *((_QWORD *)&v19->obj.klass + v14);
          if ( !v20 )
            goto LABEL_27;
          v21 = *(UnityEngine_Object_o **)(v20 + 144);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(v21, 0LL, 0LL);
          if ( ((unsigned __int8)Component_object & 1) != 0 )
          {
            if ( !v21 )
              goto LABEL_27;
            v22 = (unsigned int *)*p_targetXWeaponTrailRenderers;
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)v21,
                                 (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
            if ( !v22 )
              goto LABEL_27;
            v25 = Component_object;
            if ( Component_object )
            {
              Component_object = (Il2CppObject *)sub_1B64204(Component_object, *(_QWORD *)(*(_QWORD *)v22 + 64LL));
              if ( !Component_object )
              {
                v26 = sub_1B64348(0LL);
                sub_1B641F0(v26, 0LL);
              }
            }
            if ( v17 >= v22[6] )
LABEL_30:
              sub_1B6432C(Component_object, v16);
            *(_QWORD *)&v22[2 * v14] = v25;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v22[v15], (int32_t)v25, v23, v24);
          }
        }
        targetXWeaponTrails = this->fields.targetXWeaponTrails;
        ++v14;
        v15 += 2LL;
        if ( !targetXWeaponTrails )
          goto LABEL_27;
      }
      MultiplyTargetMatrix__updateMatrix(this, v16, v7);
    }
  }
}


void __fastcall MultiplyTargetMatrix__updateMatrix(
        MultiplyTargetMatrix_o *this,
        UnityEngine_Renderer_array *targetRenderers,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetObj; // x21
  bool v6; // w0
  UnityEngine_Transform_o *v7; // x0
  UnityEngine_Matrix4x4_o *inverse; // x0
  __int64 v9; // x1
  __int64 v10; // x8
  unsigned __int64 v11; // x24
  UnityEngine_Object_o *v12; // x22
  int32_t materialType; // w8
  UnityEngine_Material_o *sharedMaterial; // x0
  System_String_o *v15; // x1
  UnityEngine_Material_o *v16; // x0
  System_String_o *v17; // x1
  UnityEngine_Material_o *material; // x0
  System_String_o *mainMatrix; // x1
  UnityEngine_Material_o *v20; // x0
  System_String_o *invertMatrix; // x1
  UnityEngine_Matrix4x4_o v22; // [xsp+0h] [xbp-290h] BYREF
  UnityEngine_Matrix4x4_o v23; // [xsp+40h] [xbp-250h] BYREF
  UnityEngine_Matrix4x4_o v24; // [xsp+80h] [xbp-210h] BYREF
  UnityEngine_Matrix4x4_o v25; // [xsp+C0h] [xbp-1D0h]
  UnityEngine_Matrix4x4_o v26; // [xsp+100h] [xbp-190h] BYREF
  UnityEngine_Matrix4x4_o v27; // [xsp+140h] [xbp-150h] BYREF
  UnityEngine_Matrix4x4_o v28; // [xsp+180h] [xbp-110h] BYREF
  UnityEngine_Matrix4x4_o v29; // [xsp+1C0h] [xbp-D0h]
  UnityEngine_Matrix4x4_o v30; // [xsp+200h] [xbp-90h]

  if ( (byte_49FF076 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, targetRenderers);
    byte_49FF076 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  targetObj = (UnityEngine_Object_o *)this->fields.targetObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(targetObj, 0LL, 0LL);
  if ( targetRenderers && v6 )
  {
    v7 = this->fields.targetObj;
    if ( !v7
      || (UnityEngine_Transform__get_localToWorldMatrix(&v27, v7, 0LL), v30 = v27, (v7 = this->fields.targetObj) == 0LL) )
    {
      sub_1B64324(v7);
    }
    UnityEngine_Transform__get_localToWorldMatrix(&v27, v7, 0LL);
    v28 = v27;
    inverse = UnityEngine_Matrix4x4__get_inverse(&v27, &v28, 0LL);
    v29 = v27;
    v10 = *(_QWORD *)&targetRenderers->max_length;
    if ( (int)v10 >= 1 )
    {
      v11 = 0LL;
      do
      {
        if ( v11 >= (unsigned int)v10 )
          sub_1B6432C(inverse, v9);
        v12 = (UnityEngine_Object_o *)targetRenderers->m_Items[v11];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        inverse = (UnityEngine_Matrix4x4_o *)UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
        if ( ((unsigned __int8)inverse & 1) != 0 )
        {
          materialType = this->fields.materialType;
          if ( materialType == 1 )
          {
            if ( !v12 )
              sub_1B64324(inverse);
            material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v12, 0LL);
            mainMatrix = this->fields.mainMatrix;
            v27 = v30;
            if ( !material )
              sub_1B64324(0LL);
            v23 = v27;
            UnityEngine_Material__SetMatrix(material, mainMatrix, &v23, 0LL);
            v20 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v12, 0LL);
            invertMatrix = this->fields.invertMatrix;
            v25 = v29;
            if ( !v20 )
              sub_1B64324(0LL);
            v22 = v25;
            UnityEngine_Material__SetMatrix(v20, invertMatrix, &v22, 0LL);
          }
          else if ( !materialType )
          {
            if ( !v12 )
              sub_1B64324(inverse);
            sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v12, 0LL);
            v15 = this->fields.mainMatrix;
            v27 = v30;
            if ( !sharedMaterial )
              sub_1B64324(0LL);
            v26 = v27;
            UnityEngine_Material__SetMatrix(sharedMaterial, v15, &v26, 0LL);
            v16 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v12, 0LL);
            v17 = this->fields.invertMatrix;
            v25 = v29;
            if ( !v16 )
              sub_1B64324(0LL);
            v24 = v25;
            UnityEngine_Material__SetMatrix(v16, v17, &v24, 0LL);
          }
        }
        LODWORD(v10) = targetRenderers->max_length;
        ++v11;
      }
      while ( (__int64)v11 < (int)v10 );
    }
  }
}