void __fastcall MultiplyTargetMatrix___ctor(MultiplyTargetMatrix_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5DE3C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16571/*"_rootMatrix"*/);
    sub_1B885B0(&StringLiteral_16545/*"_invrootMatrix"*/);
    byte_4A5DE3C = 1;
  }
  v5 = StringLiteral_16571/*"_rootMatrix"*/;
  this->fields.mainMatrix = (struct System_String_o *)StringLiteral_16571/*"_rootMatrix"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainMatrix, v5, v2, v3);
  v6 = StringLiteral_16545/*"_invrootMatrix"*/;
  this->fields.invertMatrix = (struct System_String_o *)StringLiteral_16545/*"_invrootMatrix"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.invertMatrix, v6, v7, v8);
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
    sub_1B8880C(this, 0LL);
  transform = UnityEngine_GameObject__get_transform(obj, 0LL);
  this->fields.targetObj = transform;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetObj, (int32_t)transform, v5, v6);
}


void __fastcall MultiplyTargetMatrix__Start(MultiplyTargetMatrix_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetObj; // x21
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  struct UnityEngine_Transform_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5DE39 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DE39 = 1;
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
      sub_1B8880C(gameObject, v6);
    }
    v7 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)gameObject, this->fields.targetObjPath, 0LL);
    this->fields.targetObj = v7;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetObj, (int32_t)v7, v8, v9);
  }
  MultiplyTargetMatrix__UpdateMatrix(this, v4);
}


void __fastcall MultiplyTargetMatrix__UpdateMatrix(MultiplyTargetMatrix_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *Component_object; // x0
  const MethodInfo *v5; // x2
  struct XWeaponTrail_array *targetXWeaponTrails; // x8
  __int64 v7; // x1
  struct UnityEngine_Renderer_array **p_targetXWeaponTrailRenderers; // x20
  struct UnityEngine_Renderer_array *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  UnityEngine_Renderer_array *v12; // x1
  __int64 v13; // x22
  __int64 v14; // x23
  unsigned __int64 v15; // x26
  UnityEngine_Object_o *v16; // x21
  struct XWeaponTrail_array *v17; // x8
  __int64 v18; // x8
  UnityEngine_Object_o *v19; // x21
  unsigned int *v20; // x27
  int32_t v21; // w2
  int32_t v22; // w3
  Il2CppObject *v23; // x21
  __int64 v24; // x0

  if ( (byte_4A5DE3A & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&UnityEngine_Renderer___TypeInfo);
    byte_4A5DE3A = 1;
  }
  MultiplyTargetMatrix__updateMatrix(this, this->fields.targetRenderers, v2);
  targetXWeaponTrails = this->fields.targetXWeaponTrails;
  if ( targetXWeaponTrails )
  {
    v7 = *(_QWORD *)&targetXWeaponTrails->max_length;
    if ( v7 )
    {
      p_targetXWeaponTrailRenderers = &this->fields.targetXWeaponTrailRenderers;
      if ( !this->fields.targetXWeaponTrailRenderers )
      {
        v9 = (struct UnityEngine_Renderer_array *)sub_1B88658(UnityEngine_Renderer___TypeInfo, v7);
        this->fields.targetXWeaponTrailRenderers = v9;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.targetXWeaponTrailRenderers,
          (int32_t)v9,
          v10,
          v11);
        targetXWeaponTrails = this->fields.targetXWeaponTrails;
        if ( !targetXWeaponTrails )
LABEL_27:
          sub_1B8880C(Component_object, v12);
      }
      v13 = 4LL;
      v14 = 8LL;
      while ( 1 )
      {
        v12 = *p_targetXWeaponTrailRenderers;
        v15 = v13 - 4;
        if ( v13 - 4 >= (int)targetXWeaponTrails->max_length )
          break;
        if ( !v12 )
          goto LABEL_27;
        if ( v15 >= v12->max_length )
          goto LABEL_30;
        v16 = (UnityEngine_Object_o *)*((_QWORD *)&v12->obj.klass + v13);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Component_object = (Il2CppObject *)UnityEngine_Object__op_Equality(v16, 0LL, 0LL);
        if ( ((unsigned __int8)Component_object & 1) != 0 )
        {
          v17 = this->fields.targetXWeaponTrails;
          if ( !v17 )
            goto LABEL_27;
          if ( v15 >= v17->max_length )
            goto LABEL_30;
          v18 = *((_QWORD *)&v17->obj.klass + v13);
          if ( !v18 )
            goto LABEL_27;
          v19 = *(UnityEngine_Object_o **)(v18 + 144);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(v19, 0LL, 0LL);
          if ( ((unsigned __int8)Component_object & 1) != 0 )
          {
            if ( !v19 )
              goto LABEL_27;
            v20 = (unsigned int *)*p_targetXWeaponTrailRenderers;
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)v19,
                                 (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
            if ( !v20 )
              goto LABEL_27;
            v23 = Component_object;
            if ( Component_object )
            {
              Component_object = (Il2CppObject *)sub_1B886EC(Component_object, *(_QWORD *)(*(_QWORD *)v20 + 64LL));
              if ( !Component_object )
              {
                v24 = sub_1B88830(0LL);
                sub_1B886D8(v24, 0LL);
              }
            }
            if ( v15 >= v20[6] )
LABEL_30:
              sub_1B88814(Component_object, v12);
            *(_QWORD *)&v20[2 * v13] = v23;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v20[v14], (int32_t)v23, v21, v22);
          }
        }
        targetXWeaponTrails = this->fields.targetXWeaponTrails;
        ++v13;
        v14 += 2LL;
        if ( !targetXWeaponTrails )
          goto LABEL_27;
      }
      MultiplyTargetMatrix__updateMatrix(this, v12, v5);
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
  __int64 v7; // x1
  UnityEngine_Transform_o *v8; // x0
  UnityEngine_Matrix4x4_o *inverse; // x0
  __int64 v10; // x1
  __int64 v11; // x8
  unsigned __int64 v12; // x24
  UnityEngine_Object_o *v13; // x22
  int32_t materialType; // w8
  UnityEngine_Material_o *sharedMaterial; // x0
  System_String_o *v16; // x1
  UnityEngine_Material_o *v17; // x0
  System_String_o *v18; // x1
  UnityEngine_Material_o *material; // x0
  System_String_o *mainMatrix; // x1
  UnityEngine_Material_o *v21; // x0
  System_String_o *invertMatrix; // x1
  UnityEngine_Matrix4x4_o v23; // [xsp+0h] [xbp-290h] BYREF
  UnityEngine_Matrix4x4_o v24; // [xsp+40h] [xbp-250h] BYREF
  UnityEngine_Matrix4x4_o v25; // [xsp+80h] [xbp-210h] BYREF
  UnityEngine_Matrix4x4_o v26; // [xsp+C0h] [xbp-1D0h]
  UnityEngine_Matrix4x4_o v27; // [xsp+100h] [xbp-190h] BYREF
  UnityEngine_Matrix4x4_o v28; // [xsp+140h] [xbp-150h] BYREF
  UnityEngine_Matrix4x4_o v29; // [xsp+180h] [xbp-110h] BYREF
  UnityEngine_Matrix4x4_o v30; // [xsp+1C0h] [xbp-D0h]
  UnityEngine_Matrix4x4_o v31; // [xsp+200h] [xbp-90h]

  if ( (byte_4A5DE3B & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DE3B = 1;
  }
  memset(&v29, 0, sizeof(v29));
  targetObj = (UnityEngine_Object_o *)this->fields.targetObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(targetObj, 0LL, 0LL);
  if ( targetRenderers && v6 )
  {
    v8 = this->fields.targetObj;
    if ( !v8
      || (UnityEngine_Transform__get_localToWorldMatrix(&v28, v8, 0LL), v31 = v28, (v8 = this->fields.targetObj) == 0LL) )
    {
      sub_1B8880C(v8, v7);
    }
    UnityEngine_Transform__get_localToWorldMatrix(&v28, v8, 0LL);
    v29 = v28;
    inverse = UnityEngine_Matrix4x4__get_inverse(&v28, &v29, 0LL);
    v30 = v28;
    v11 = *(_QWORD *)&targetRenderers->max_length;
    if ( (int)v11 >= 1 )
    {
      v12 = 0LL;
      do
      {
        if ( v12 >= (unsigned int)v11 )
          sub_1B88814(inverse, v10);
        v13 = (UnityEngine_Object_o *)targetRenderers->m_Items[v12];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        inverse = (UnityEngine_Matrix4x4_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
        if ( ((unsigned __int8)inverse & 1) != 0 )
        {
          materialType = this->fields.materialType;
          if ( materialType == 1 )
          {
            if ( !v13 )
              sub_1B8880C(inverse, v10);
            material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v13, 0LL);
            mainMatrix = this->fields.mainMatrix;
            v28 = v31;
            if ( !material )
              sub_1B8880C(0LL, mainMatrix);
            v24 = v28;
            UnityEngine_Material__SetMatrix(material, mainMatrix, &v24, 0LL);
            v21 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v13, 0LL);
            invertMatrix = this->fields.invertMatrix;
            v26 = v30;
            if ( !v21 )
              sub_1B8880C(0LL, invertMatrix);
            v23 = v26;
            UnityEngine_Material__SetMatrix(v21, invertMatrix, &v23, 0LL);
          }
          else if ( !materialType )
          {
            if ( !v13 )
              sub_1B8880C(inverse, v10);
            sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v13, 0LL);
            v16 = this->fields.mainMatrix;
            v28 = v31;
            if ( !sharedMaterial )
              sub_1B8880C(0LL, v16);
            v27 = v28;
            UnityEngine_Material__SetMatrix(sharedMaterial, v16, &v27, 0LL);
            v17 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v13, 0LL);
            v18 = this->fields.invertMatrix;
            v26 = v30;
            if ( !v17 )
              sub_1B8880C(0LL, v18);
            v25 = v26;
            UnityEngine_Material__SetMatrix(v17, v18, &v25, 0LL);
          }
        }
        LODWORD(v11) = targetRenderers->max_length;
        ++v12;
      }
      while ( (__int64)v12 < (int)v11 );
    }
  }
}