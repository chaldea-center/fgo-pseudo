void ExUIGrid___ctor(ExUIGrid_o *this, const MethodInfo *method)
{
  UIGrid___ctor((UIGrid_o *)this, 0);
}


void ExUIGrid__ResetPosition(
        ExUIGrid_o *this,
        System_Collections_Generic_List_Transform__o *list,
        const MethodInfo *method)
{
  __int64 IsNullOrEmpty; // x0
  __int64 v6; // x1
  int32_t maxPerLine; // w8
  float v8; // s9
  float size; // s8
  float v10; // s8
  unsigned int v11; // w8
  int v12; // w25
  UnityEngine_Vector2_o PivotOffset; // kr10_8
  float v14; // s2
  int v15; // w26
  float v16; // s0
  int32_t v17; // w8
  int v18; // w2
  System_Collections_Generic_List_object__o *v19; // x22
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s15
  int v22; // w8
  float y; // s12
  float v24; // s0
  float v25; // s14
  int32_t v26; // w23
  float v27; // s13
  UnityEngine_Component_o *v28; // x24
  int32_t arrangement; // w8
  float x; // s9
  float v31; // s10
  float cellWidth; // s0
  float v33; // s9
  double v34; // d0
  double v35; // d0
  float v36; // s1
  __int64 v37; // x8
  float v38; // s0
  float v39; // s1
  float cellHeight; // s0
  float v41; // s10
  double v42; // d0
  double v43; // d0
  float v44; // s1
  __int64 v45; // x8
  float v46; // s0
  float v47; // s1
  UnityEngine_GameObject_o *gameObject; // x0
  float v49; // [xsp+Ch] [xbp-B4h]
  double iptr; // [xsp+18h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D320B1 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Application_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform__GetRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform__get_Item__);
    byte_4D320B1 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)list, 0);
  if ( (IsNullOrEmpty & 1) == 0 )
  {
    maxPerLine = this->fields.maxPerLine;
    if ( maxPerLine <= 0 )
    {
      UIGrid__ResetPosition((UIGrid_o *)this, list, 0);
    }
    else
    {
      this->fields.mReposition = 0;
      if ( !list )
LABEL_72:
        sub_1C93D2C(IsNullOrEmpty, v6);
      v8 = (float)maxPerLine;
      size = (float)list->fields._size;
      if ( !byte_4D2A7BA )
      {
        sub_1C93AD4(&System_Math_TypeInfo);
        byte_4D2A7BA = 1;
      }
      v10 = size / v8;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v11 = vcvtps_s32_f32(v10);
      if ( ceilf(v10) == INFINITY )
        v12 = 0x80000000;
      else
        v12 = v11;
      PivotOffset = NGUIMath__GetPivotOffset(this->fields.pivot, 0);
      if ( v12 >= 1 )
      {
        v14 = fminf(PivotOffset.fields.x, 1.0);
        v15 = 0;
        if ( PivotOffset.fields.x < 0.0 )
          v16 = 0.0;
        else
          v16 = v14;
        v49 = v16;
        while ( 1 )
        {
          v17 = this->fields.maxPerLine;
          if ( list->fields._size - v17 * v15 >= v17 )
            v18 = this->fields.maxPerLine;
          else
            v18 = list->fields._size - v17 * v15;
          IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___GetRange(
                                     (System_Collections_Generic_List_object__o *)list,
                                     v17 * v15,
                                     v18,
                                     (const MethodInfo_387A56C *)Method_System_Collections_Generic_List_Transform__GetRange__);
          v19 = (System_Collections_Generic_List_object__o *)IsNullOrEmpty;
          if ( !byte_4D2A139 )
          {
            IsNullOrEmpty = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
            byte_4D2A139 = 1;
          }
          static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
          z = static_fields->zeroVector.fields.z;
          if ( this->fields.arrangement )
          {
            if ( !v19 )
              goto LABEL_72;
            v22 = v19->fields._size;
            y = static_fields->zeroVector.fields.y;
            v24 = this->fields.cellHeight * (float)(1 - v22);
            v25 = v24 + (float)(PivotOffset.fields.y * (float)(0.0 - v24));
          }
          else
          {
            if ( !v19 )
              goto LABEL_72;
            v22 = v19->fields._size;
            y = (float)(this->fields.cellHeight * (float)(1 - v12))
              + (float)(PivotOffset.fields.y * (float)(0.0 - (float)(this->fields.cellHeight * (float)(1 - v12))));
            v25 = (float)(v49 * (float)(this->fields.cellWidth * (float)(v22 - 1))) + 0.0;
          }
          if ( v22 >= 1 )
            break;
LABEL_69:
          if ( ++v15 == v12 )
            return;
        }
        v26 = 0;
        v27 = (float)v15;
        while ( 1 )
        {
          IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                     v19,
                                     v26,
                                     (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_Transform__get_Item__);
          if ( !IsNullOrEmpty )
            goto LABEL_72;
          v28 = (UnityEngine_Component_o *)IsNullOrEmpty;
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)IsNullOrEmpty, 0);
          arrangement = this->fields.arrangement;
          x = localPosition.fields.x;
          v31 = localPosition.fields.y;
          if ( arrangement != 2 )
          {
            if ( arrangement == 1 )
            {
              x = this->fields.cellWidth * v27;
              v31 = (float)v26 * (float)-this->fields.cellHeight;
            }
            else if ( !arrangement )
            {
              x = this->fields.cellWidth * (float)v26;
              v31 = v27 * (float)-this->fields.cellHeight;
            }
            goto LABEL_60;
          }
          cellWidth = this->fields.cellWidth;
          if ( cellWidth > 0.0 )
            break;
LABEL_48:
          cellHeight = this->fields.cellHeight;
          if ( cellHeight <= 0.0 )
            goto LABEL_60;
          v41 = localPosition.fields.y / cellHeight;
          v42 = modf((float)(localPosition.fields.y / cellHeight), &iptr);
          if ( v41 >= 0.0 )
          {
            if ( v42 == 0.5 )
            {
              v43 = iptr;
              v44 = 1.0;
LABEL_54:
              v45 = (__int64)v43;
              v46 = v43;
              v47 = v46 + v44;
              if ( (v45 & 1) != 0 )
                v46 = v47;
              goto LABEL_59;
            }
            v46 = floorf(v41 + 0.5);
          }
          else
          {
            if ( v42 == -0.5 )
            {
              v43 = iptr;
              v44 = -1.0;
              goto LABEL_54;
            }
            v46 = ceilf(v41 + -0.5);
          }
LABEL_59:
          v31 = v46 * this->fields.cellHeight;
LABEL_60:
          if ( !this->fields.animateSmoothly )
            goto LABEL_66;
          if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
          if ( UnityEngine_Application__get_isPlaying(0) )
          {
            gameObject = UnityEngine_Component__get_gameObject(v28, 0);
            v52.fields.x = x - v25;
            v52.fields.y = v31 - y;
            v52.fields.z = localPosition.fields.z - z;
            IsNullOrEmpty = (__int64)SpringPosition__Begin(gameObject, v52, 15.0, 0);
            if ( !IsNullOrEmpty )
              goto LABEL_72;
            *(_WORD *)(IsNullOrEmpty + 49) = 257;
          }
          else
          {
LABEL_66:
            IsNullOrEmpty = (__int64)UnityEngine_Component__get_transform(v28, 0);
            if ( !IsNullOrEmpty )
              goto LABEL_72;
            v53.fields.x = x - v25;
            v53.fields.y = v31 - y;
            v53.fields.z = localPosition.fields.z - z;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsNullOrEmpty, v53, 0);
          }
          if ( ++v26 >= v19->fields._size )
            goto LABEL_69;
        }
        v33 = localPosition.fields.x / cellWidth;
        v34 = modf((float)(localPosition.fields.x / cellWidth), &iptr);
        if ( v33 >= 0.0 )
        {
          if ( v34 == 0.5 )
          {
            v35 = iptr;
            v36 = 1.0;
LABEL_42:
            v37 = (__int64)v35;
            v38 = v35;
            v39 = v38 + v36;
            if ( (v37 & 1) != 0 )
              v38 = v39;
            goto LABEL_47;
          }
          v38 = floorf(v33 + 0.5);
        }
        else
        {
          if ( v34 == -0.5 )
          {
            v35 = iptr;
            v36 = -1.0;
            goto LABEL_42;
          }
          v38 = ceilf(v33 + -0.5);
        }
LABEL_47:
        x = v38 * this->fields.cellWidth;
        goto LABEL_48;
      }
    }
  }
}