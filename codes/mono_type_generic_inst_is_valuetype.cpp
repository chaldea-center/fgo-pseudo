__int64 __fastcall mono_type_generic_inst_is_valuetype(_QWORD **a1)
{
  __int64 image_0; // x0

  image_0 = j_il2cpp_assembly_get_image_0(**a1);
  return sub_1C28508(image_0) & 1;
}